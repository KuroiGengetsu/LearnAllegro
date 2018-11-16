# Learn Allegro

I am learning Allegro now, and all my examples are in this repository.

## API

1. [Display](#Display)

2. [Events](#Events)

3. [Timers](#Timers)

4. [Bitmaps](#Bitmaps)

5. [Input](#Input)

6. [Thread](#Thread)

7. [Addons](#Addons)

    1. [The Font Addon](#The-Font-Addon)

    2. [The Audio Addon](#The-Audio-Addon)

    3. [Native Diaplogs Addon](#Native-Diaplogs-Addon)

    4. [Primitives Addon](#Primitives-Addon)

### Display

Display 可以理解为窗口

#### 创建第一个 display

这一小节将通过一个简单的例子来了解如何创建一个窗口, 并设置窗口的 **可选属性**(_optional properties_).

下面先放示例:

```C
#include <stdio.h>  // fprintf(), stderr
#include <stdlib.h>  // exit(status), EXIT_FAILURE, EXIT_SUCCESS
#include <allegro5/allegro.h>  // 使用 allegro 中的接口

int main(int argc, char **argv) {  // 一定要给 main() 加上参数

    // 创建一个空指针
    ALLEGRO_DISPLAY *display = NULL;

    // 尝试初始化 allegro 并检查是否成功
    if (!al_init()) {
        fprintf(stderr, "Failed to initizlize allegro!\n");
        exit(EXIT_FAILURE);
    }

    // 创建一个 640x480 的窗口
    display = al_create_display(640, 480);
    // 检查窗口是否创建成功
    if (!display) {
        fprintf(stderr, "Failed to create display!\n");
        exit(EXIT_FAILURE);
    }

    // 着色
    al_clear_to_color(al_map_rgb(0, 0, 0));

    // ?
    al_flip_display();

    // 等待 10.0 秒
    al_rest(10.0);
    // 摧毁窗口
    al_destroy_display(display);

    return EXIT_SUCCESS;
}
```

为了调用基本的 Allegro 接口, 需要包含头文件 `<allegro5/allegro.h>`

`main` 函数 必须是标准的, 也就是带上 _argument count_ 与 *argument vector* 两个参数, 因为 Allegro 会调用你的 `main` 函数.

下面这段代码用来**初始化 Allegro**, 并且检查是否初始化成功:

```C
if (!al_init()) {
    fprintf(stderr, "Failed to initizlize allegro!\n");
    exit(EXIT_FAILURE);
}
```

接下来这段代码用来创建窗口, `al_create_display(width, height)`, 根据给定的宽和高, 如果成功返回一个 _display_, 如果失败就返回 _NULL_:

```C
// 创建一个 640x480 的窗口
display = al_create_display(640, 480);
// 检查窗口是否创建成功
if (!display) {
    fprintf(stderr, "Failed to create display!\n");
    exit(EXIT_FAILURE);
}
```

`al_map_rgb` 接受三个参数, 也就是颜色中的 RGB 了, 并且返回一个 `ALLEGRO_COLOR` 结构, `al_clear_to_color` 将当前的 _display_ 填充为给定的颜色.

#### 创建全屏窗口

### Events

### Timers

### Bitmaps

### Input

### Thread

### Addons

#### The Font Addon

#### The Audio Addon

#### Native Dialogs Addon

#### Primitives Addon

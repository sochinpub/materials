#include <glib.h>


/**
 * idle时间源优先级低，只有
 * 主事件循环无其它时间源处理时才会被处理.
 *
 * glib提供了预定义的空闲时间源类型，用户需要自行注册事件源回调函数:
 *
 * idle_func 是 idle 事件源的响应函数,如果该函数返回值为 TRUE
 * ,那么它会在主事件循环空闲时重复被执行;
 * 如果 idle_func 的返回值为 FALSE,那么该函数在执行一次后,便被主事件循环从事件源中移除。
 * g_idle_add 函数内部定义了一个空闲事件源,并将用户定义的回调函数设为空闲事件源的响应函数, 
 * 然后将该事件源挂到主循环上下文。
 *
 */
static gboolean idle_func(gpointer data)
{
    g_print("%s\n", (gchar* )data);
    return TRUE;
}

int main(void)
{
    GMainLoop *loop = g_main_loop_new(NULL, TRUE);
    GMainContext *context = g_main_loop_get_context(loop);

    g_idle_add(idle_func, "Hello world!");
    g_main_loop_run(loop);

    g_main_context_unref(context);
    g_main_loop_unref(loop);

    return 0;
}

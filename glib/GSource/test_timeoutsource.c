#include <glib.h>


/**
 *
 * GLib 也提供了预定义的定时器事件源,其用法与 GLib 预定义的空闲事件源类似.
 * 如果要自定义定时器类型的事件源,只需让事件源的 prepare 与 check 接口在时间
 * 超过所设定的时间间隔时返回 TRUE, 否则返回 FALSE。
 *
 */
static gboolean timeout_func(gpointer data)
{
    static guint i = 0;
    i += 1;
    g_print("%d\n", i);

    return TRUE;
}

int main(void)
{
    GMainLoop *loop = g_main_loop_new(NULL, TRUE);
    GMainContext *context = g_main_loop_get_context(loop);

    g_timeout_add(2000, timeout_func, loop);

    g_main_loop_run(loop);

    g_main_context_unref(context);
    g_main_loop_unref(loop);

    return 0;
}

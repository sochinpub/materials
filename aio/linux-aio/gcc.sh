
_o=${2:-${1%.*}}
#gcc `pkg-config --cflags --libs glib-2.0` $1 -lpthread -o $_o

gcc $1 -o $_o -laio



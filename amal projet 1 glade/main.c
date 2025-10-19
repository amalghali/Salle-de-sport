#include <gtk/gtk.h>
int main(int argc, char *argv[]) {
GtkBuilder *builder;
Gtkbuilder *window;
GTkwidget *image;
gtk_init(&argc, &argv);
builder = gtk_builder_new_from_file("amal-projet-1-glade.glade.bak.bak")
window = GTK_WIDGET(gtk_builder_get_object(builder, "NEXTLEVEL GYM"));
image = GTK_WIDGET(gtk_builder_get_object(builder, "image8"));
gtk_widget_set_hexpand(image, TRUE);
gtk_widget_set_vexpand(image, TRUE);
gtk_widget_set_size_request(image, 800, 600);
gtk_widget_show_all(window);
gtk_main();
g_object_unref(builder);
return 0;
}


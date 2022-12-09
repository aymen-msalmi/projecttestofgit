#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include <string.h>

void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input;
GtkWidget *output;


output=lookup_widget(GTK_ENTRY(button), "label2");
input= lookup_widget(GTK_ENTRY(button), "entry1");
char ch[50]="";

strcat(ch,gtk_entry_get_text(GTK_ENTRY(input)));

gtk_label_set_text(GTK_LABEL(output),ch);



}


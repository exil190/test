/* 
 * File:   main.c
 * Author: phodrone1
 *
 * Created on 5 février 2015, 09:31
 */

#include <stdlib.h>
#include <gtk/gtk.h> 

int main(int argc,char **argv)
{ 
    /* Declaration du widget */
    GtkWidget *pWindow;
    gtk_init(&argc,&argv);
    
    /* Création de la fenêtre */
    pWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    /* Affichage de la fenêtre */
    gtk_widget_show(pWindow);
    /* Destruction de la fenêtre */
    gtk_widget_destroy(pWindow);
     
    
     
    return EXIT_SUCCESS;
}

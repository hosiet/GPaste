/*
 *      This file is part of GPaste.
 *
 *      Copyright 2015 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 *
 *      GPaste is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      GPaste is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with GPaste.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_UI_PANEL_HISTORY_H__
#define __G_PASTE_UI_PANEL_HISTORY_H__

#include <gpaste-client.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_UI_PANEL_HISTORY (g_paste_ui_panel_history_get_type ())

G_PASTE_FINAL_TYPE (UiPanelHistory, ui_panel_history, UI_PANEL_HISTORY, GtkListBoxRow)

void g_paste_ui_panel_history_activate  (GPasteUiPanelHistory *self);
void g_paste_ui_panel_history_set_length (GPasteUiPanelHistory *self,
                                          guint64               length);

const gchar *g_paste_ui_panel_history_get_history (const GPasteUiPanelHistory *self);

GtkWidget *g_paste_ui_panel_history_new (GPasteClient *client,
                                         const gchar  *history);

G_END_DECLS

#endif /*__G_PASTE_UI_PANEL_HISTORY_H__*/

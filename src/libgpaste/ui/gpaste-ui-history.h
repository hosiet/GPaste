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

#ifndef __G_PASTE_UI_HISTORY_H__
#define __G_PASTE_UI_HISTORY_H__

#include <gpaste-ui-item.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_UI_HISTORY            (g_paste_ui_history_get_type ())
#define G_PASTE_UI_HISTORY(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_PASTE_TYPE_UI_HISTORY, GPasteUiHistory))
#define G_PASTE_IS_UI_HISTORY(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_PASTE_TYPE_UI_HISTORY))
#define G_PASTE_UI_HISTORY_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), G_PASTE_TYPE_UI_HISTORY, GPasteUiHistoryClass))
#define G_PASTE_IS_UI_HISTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), G_PASTE_TYPE_UI_HISTORY))
#define G_PASTE_UI_HISTORY_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), G_PASTE_TYPE_UI_HISTORY, GPasteUiHistoryClass))

typedef struct _GPasteUiHistory GPasteUiHistory;
typedef struct _GPasteUiHistoryClass GPasteUiHistoryClass;

G_PASTE_VISIBLE
GType g_paste_ui_history_get_type (void);

GtkWidget *g_paste_ui_history_new (GPasteClient *client);

G_END_DECLS

#endif /*__G_PASTE_UI_HISTORY_H__*/
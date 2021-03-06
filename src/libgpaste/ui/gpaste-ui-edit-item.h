/*
 * This file is part of GPaste.
 *
 * Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 */

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_UI_EDIT_ITEM_H__
#define __G_PASTE_UI_EDIT_ITEM_H__

#include <gpaste-ui-item-action.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_UI_EDIT_ITEM (g_paste_ui_edit_item_get_type ())

G_PASTE_FINAL_TYPE (UiEditItem, ui_edit_item, UI_EDIT_ITEM, GPasteUiItemAction)

GtkWidget *g_paste_ui_edit_item_new (GPasteClient *client,
                                     GtkWindow    *rootwin);

G_END_DECLS

#endif /*__G_PASTE_UI_EDIT_ITEM_H__*/

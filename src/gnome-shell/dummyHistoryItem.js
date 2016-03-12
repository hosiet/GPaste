/*
 * This file is part of GPaste.
 *
 * Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 */
/* -*- mode: js2; js2-basic-offset: 4; indent-tabs-mode: nil -*- */

const Gettext = imports.gettext;
const Lang = imports.lang;

const PopupMenu = imports.ui.popupMenu;

const _ = Gettext.domain('GPaste').gettext;

const GPasteDummyHistoryItem = new Lang.Class({
    Name: 'GPasteDummyHistoryItem',
    Extends: PopupMenu.PopupMenuItem,

    _init: function() {
        this.parent(_("(Couldn't connect to GPaste daemon)"));
        this.setSensitive(false);
    },

    update: function() {
        this.label.text = _("(Empty)");
    }
});

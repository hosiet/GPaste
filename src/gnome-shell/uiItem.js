/*
 * This file is part of GPaste.
 *
 * Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 */
/* -*- mode: js2; js2-basic-offset: 4; indent-tabs-mode: nil -*- */

const Lang = imports.lang;

const GPaste = imports.gi.GPaste;

const St = imports.gi.St;

const GPasteUiItem = new Lang.Class({
    Name: 'GPasteUiItem',

    _init: function(menu) {
        this.actor = new St.Button({
            reactive: true,
            can_focus: true,
            track_hover: true,
            style_class: 'system-menu-action'
        });

        this.actor.child = new St.Icon({ icon_name: 'go-home-symbolic' });

        this.actor.connect('clicked', function() {
            menu.itemActivated();
            GPaste.util_spawn('Ui');
        });
    }
});

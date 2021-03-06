/*
 * This file is part of GPaste.
 *
 * Copyright (c) 2010-2016, Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 */
/* -*- mode: js2; js2-basic-offset: 4; indent-tabs-mode: nil -*- */

const Lang = imports.lang;

const St = imports.gi.St;

const GPasteAboutItem = new Lang.Class({
    Name: 'GPasteAboutItem',

    _init: function(client, menu) {
        this.actor = new St.Button({
            reactive: true,
            can_focus: true,
            track_hover: true,
            style_class: 'system-menu-action'
        });

        this.actor.child = new St.Icon({ icon_name: 'dialog-information-symbolic' });

        this.actor.connect('clicked', function() {
            menu.itemActivated();
            client.about(null);
        });
    }
});

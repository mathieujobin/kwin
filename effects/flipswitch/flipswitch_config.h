/********************************************************************
 KWin - the KDE window manager
 This file is part of the KDE project.

 Copyright (C) 2008, 2009 Martin Gräßlin <mgraesslin@kde.org>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/

#ifndef KWIN_FLIPSWITCH_CONFIG_H
#define KWIN_FLIPSWITCH_CONFIG_H

#include <kcmodule.h>

#include "ui_flipswitch_config.h"

class KActionCollection;

namespace KWin
{

class FlipSwitchEffectConfigForm : public QWidget, public Ui::FlipSwitchEffectConfigForm
{
    Q_OBJECT
public:
    explicit FlipSwitchEffectConfigForm(QWidget* parent);
};

class FlipSwitchEffectConfig : public KCModule
{
    Q_OBJECT
public:
    explicit FlipSwitchEffectConfig(QWidget* parent = nullptr, const QVariantList& args = QVariantList());
    ~FlipSwitchEffectConfig() override;

public Q_SLOTS:
    void save() override;

private:
    FlipSwitchEffectConfigForm* m_ui;
    KActionCollection* m_actionCollection;
};

} // namespace

#endif

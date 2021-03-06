/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names
 * can be found in the AUTHORS file distributed with this source
 * distribution.
 *
 * xoreos is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * xoreos is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with xoreos. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file
 *  Party selection GUI for Star Wars: Knights of the Old Republic.
 */

#ifndef ENGINES_KOTOR_GUI_INGAME_PARTYSELECTION_H
#define ENGINES_KOTOR_GUI_INGAME_PARTYSELECTION_H

#include "src/engines/kotor/partyconfig.h"

#include "src/engines/kotor/gui/gui.h"

namespace Engines {

namespace KotOR {

class PartySelectionGUI : public GUI {
public:
	PartySelectionGUI(bool k2 = false);

	void loadConfiguration(const PartyConfiguration &config);

protected:
	void callbackActive(Widget &widget);

private:
	bool _kotor2;
	PartyConfiguration _config;
	int _numSelectedSlots;
	int _activeSlot;

	const Common::UString getPortrait(const Common::UString &templ);
	void setSlotTexture(int index, const Common::UString &portrait);
	void toggleSlot(int index, bool enabled);
	void onSelectionChanged();
};

} // End of namespace KotOR

} // End of namespace Engines

#endif // ENGINES_KOTOR_GUI_INGAME_PARTYSELECTION_H

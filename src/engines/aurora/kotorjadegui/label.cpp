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
 *  A label widget for Star Wars: Knights of the Old Republic and Jade Empire.
 */

#include "src/common/system.h"

#include "src/aurora/gff3file.h"

#include "src/engines/aurora/kotorjadegui/label.h"

namespace Engines {

WidgetLabel::WidgetLabel(GUI &gui, const Common::UString &tag)
		: KotORJadeWidget(gui, tag),
		  _hovered(false) {
}

WidgetLabel::~WidgetLabel() {
}

void WidgetLabel::load(const Aurora::GFF3Struct &gff) {
	KotORJadeWidget::load(gff);
}

bool WidgetLabel::isHovered() const {
	return _hovered;
}

void WidgetLabel::enter() {
	_hovered = true;
}

void WidgetLabel::leave() {
	_hovered = false;
}

void WidgetLabel::mouseUp(uint8 UNUSED(state), float UNUSED(x), float UNUSED(y)) {
	setActive(true);
}

} // End of namespace Engines

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
 *  A slider widget for Star Wars: Knights of the Old Republic and Jade Empire..
 */

#ifndef ENGINES_AURORA_KOTORJADEGUI_SLIDER_H
#define ENGINES_AURORA_KOTORJADEGUI_SLIDER_H

#include "src/engines/aurora/kotorjadegui/kotorjadewidget.h"

namespace Engines {

class WidgetSlider : public KotORJadeWidget {
public:
	WidgetSlider(GUI &gui, const Common::UString &tag);
	~WidgetSlider();

	void load(const Aurora::GFF3Struct &gff);
};

} // End of namespace Engines

#endif // ENGINES_AURORA_KOTORJADEGUI_SLIDER_H

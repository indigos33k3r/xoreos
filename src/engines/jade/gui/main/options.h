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
 *  The Jade Empire main options menu.
 */

#ifndef ENGINES_JADE_GUI_MAIN_OPTIONS_H
#define ENGINES_JADE_GUI_MAIN_OPTIONS_H

#include "src/common/ustring.h"

#include "src/engines/jade/gui/gui.h"

namespace Engines {

class WidgetButton;
class WidgetProtoItem;

namespace Jade {

class Module;

class OptionsMenu : public Engines::Jade::GUI {
public:
	OptionsMenu(::Engines::Console *console = 0);

private:
	void createAudioOptions();
	void createVideoOptions();
	void createDifficultyOptions();
	void createGameInfoOptions();
	void createControlOptions();

	Common::ScopedPtr<GUI> _audioOptions;
	Common::ScopedPtr<GUI> _videoOptions;
	Common::ScopedPtr<GUI> _difficultyOptions;
	Common::ScopedPtr<GUI> _gameInfoOptions;
	Common::ScopedPtr<GUI> _controlOptions;

	Engines::WidgetProtoItem *_audioOptionsButton;
	Engines::WidgetProtoItem *_videoOptionsButton;
	Engines::WidgetProtoItem *_difficultyOptionsButton;
	Engines::WidgetProtoItem *_gameInfoOptionsButton;
	Engines::WidgetProtoItem *_controlOptionsButton;
	Engines::WidgetProtoItem *_creditsButton;

	Engines::WidgetButton *_backButton;
	Engines::KotORJadeWidget *_currentButton;

	Engines::WidgetLabel *_optionsDescription;

	Common::UString _audioOptionsDescription;
	Common::UString _videoOptionsDescription;
	Common::UString _difficultyOptionsDescription;
	Common::UString _gameInfoOptionsDescription;
	Common::UString _controlOptionsDescription;
	Common::UString _creditsDescription;
	Common::UString _backButtonDescription;

protected:
	void callbackActive(Widget &widget);
	void callbackRun();
};

} // End of namespace Jade

} // End of namespace Engines

#endif // ENGINES_JADE_GUI_MAIN_OPTIONS_H

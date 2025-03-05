/* Copyright 2013-2019 Matt Tytel
 *
 * vital-fx is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * vital-fx is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with vital-fx.  If not, see <http://www.gnu.org/licenses/>.
 */

// Framework
#include "../synthesis/framework/synth_module.cpp"
#include "../synthesis/framework/processor.cpp"
#include "../synthesis/framework/processor_router.cpp"
#include "../synthesis/framework/value.cpp"
#include "../synthesis/framework/operators.cpp"
#include "../synthesis/framework/utils.cpp"
#include "../synthesis/framework/feedback.cpp"

// Effects
#include "../synthesis/effects/compressor.cpp"
#include "../synthesis/effects/delay.cpp"
#include "../synthesis/effects/distortion.cpp"
#include "../synthesis/effects/phaser.cpp"
#include "../synthesis/effects/reverb.cpp"

// Effects modules
#include "../synthesis/modules/chorus_module.cpp"
#include "../synthesis/modules/comb_module.cpp"
#include "../synthesis/modules/compressor_module.cpp"
#include "../synthesis/modules/delay_module.cpp"
#include "../synthesis/modules/distortion_module.cpp"
#include "../synthesis/modules/equalizer_module.cpp"
#include "../synthesis/modules/filter_module.cpp"
#include "../synthesis/modules/filters_module.cpp"
#include "../synthesis/modules/flanger_module.cpp"
#include "../synthesis/modules/formant_module.cpp"
#include "../synthesis/modules/phaser_module.cpp"
#include "../synthesis/modules/reorderable_effect_chain.cpp"
#include "../synthesis/modules/reverb_module.cpp"

// Filters
#include "../synthesis/filters/comb_filter.cpp"
#include "../synthesis/filters/dc_filter.cpp"
#include "../synthesis/filters/decimator.cpp"
#include "../synthesis/filters/digital_svf.cpp"
#include "../synthesis/filters/diode_filter.cpp"
#include "../synthesis/filters/dirty_filter.cpp"
#include "../synthesis/filters/fir_halfband_decimator.cpp"
#include "../synthesis/filters/formant_filter.cpp"
#include "../synthesis/filters/formant_manager.cpp"
#include "../synthesis/filters/iir_halfband_decimator.cpp"
#include "../synthesis/filters/ladder_filter.cpp"
#include "../synthesis/filters/linkwitz_riley_filter.cpp"
#include "../synthesis/filters/phaser_filter.cpp"
#include "../synthesis/filters/sallen_key_filter.cpp"
#include "../synthesis/filters/synth_filter.cpp"
#include "../synthesis/filters/upsampler.cpp"
#include "../synthesis/filters/vocal_tract.cpp"

// Utilities
#include "../synthesis/utilities/peak_meter.cpp"
#include "../synthesis/utilities/smooth_value.cpp"
#include "../synthesis/utilities/value_switch.cpp"

// Engine
#include "../synthesis/effects_engine/effects_modulation_handler.cpp"
#include "../synthesis/effects_engine/sound_engine.cpp"

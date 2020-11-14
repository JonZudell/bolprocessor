/*  StringLists.h (BP2 version CVS) */

/*  This file is a part of Bol Processor 2
    Copyright (c) 1990-2000 by Bernard Bel, Jim Kippen and Srikumar K. Subramanian
    Copyright (c) 2013 by Anthony Kozar
    All rights reserved. 
    
    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met: 
    
       Redistributions of source code must retain the above copyright notice, 
       this list of conditions and the following disclaimer. 
    
       Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution. 
    
       Neither the names of the Bol Processor authors nor the names of project
       contributors may be used to endorse or promote products derived from this
       software without specific prior written permission. 
    
    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef BP_STRINGLISTS_H
#define BP_STRINGLISTS_H

/* Arrays of constant strings from BP2's "STR#" resources */
/* These were copied from the BP2-RMaker.R resource file */

// FIXME: Need to define the length of all strings to be the same
// until the code in LoadStringResource() is replaced as described.
#define	MAX_STRINGLISTS_STR_LEN	100

// TYPE STR# ;; Settings top dialog window
// SettingsTopDialog,300
#define NUM_TOP_SETTINGS_STRS	16

const char TopSettingsStr[NUM_TOP_SETTINGS_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"Non-stop improvize",
	"Cyclic play",
	"Use each substitution",
	"Produce all items",
	"Display production",
	"Step-by-step produce",
	"Step subgrammars",
	"Trace production",
	"Choose candidate rule",
	"Display items",
	"Show graphics",
	"Allow randomize",
	"Time setting display",
	"Time setting step",
	"Time setting trace",
	"Trace Csound"
};


// TYPE STR# ;; Settings bottom dialog window
// SettingsBottomDialog,301
#define NUM_BOTTOM_SETTINGS_STRS	12

const char BottomSettingsStr[NUM_BOTTOM_SETTINGS_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"Use MIDI in/out",
	"Synchronize start",
	"Compute while playing",
	"Interactive (use input)",
	"Reset rule weights",
	"Reset rule flags",
	"Reset controllers",
	"Ignore constraints",
	"Write MIDI files",
	"Show messages",
	"Write Csound scores",
	"Opcode OMS"
};


// TYPE STR# ;; Script commands
// Script,303
#define NUM_SCRIPT_CMD_STRS	193

const char ScriptCommand[NUM_SCRIPT_CMD_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"110 BP2 script",
	"144 Define �variable� �sound item�",
	"171 (-",
	"42 Activate window �windowname�",
	"167 AE send fast class '�AEclass�' ID '�AEID�' to application '�signature�'",
	"168 AE send normal class '�AEclass�' ID '�AEID�' to application '�signature�'",
	"169 AE wait class '�AEclass�' ID '�AEID�'",
	"28 Alphabet",
	"12 Analyze selection in window �windowname�",
	"125 Autorandomize OFF",
	"126 Autorandomize ON",
	"148 Beep",
	"48 Buffer size �long� symbols",
	"64 Clear",
	"25 Clear window �windowname�",
	"9 Compile",
	"111 Compute while play OFF",
	"112 Compute while play ON",
	"36 Control panel",
	"62 Copy",
	"23 Csound score OFF",
	"22 Csound score ON",
	"187 Csound trace OFF",
	"186 Csound trace ON",
	"115 Cyclic play OFF",
	"116 Cyclic play ON",
	"61 Cut",
	"29 Data",
	"73 Default buffer size �long� symbols",
	"19 Delete �unsigned� chars",
	"121 Display items OFF",
	"122 Display items ON",
	"152 Display time setting OFF",
	"153 Display time setting ON",
	"0 Expand selection window �windowname�",
	"41 Freeze windows OFF",
	"40 Freeze windows ON",
	"143 Glossary",
	"27 Grammar",
	"163 Graphic Color OFF",
	"162 Graphic Color ON",
	"35 Graphics",
	"51 Graphic scale �long� pixels = �long� milliseconds",
	"158 Hide window �windowname�",
	"137 Ignore constraints OFF",
	"138 Ignore constraints ON",
	"109 Info",
	"31 Interaction",
	"131 Interactive OFF",
	"132 Interactive ON",
	"38 Keyboard",
	"5 Load Project �filename�",
	"26 Load settings �filename�",
	"18 Maximum production time �long� ticks",
	"179 Metronom",
	"185 MIDI file OFF",
	"184 MIDI file ON",
	"21 MIDI sound OFF",
	"20 MIDI sound ON",
	"30 Settings",
	"4 New Project",
	"113 Non-stop improvize OFF",
	"114 Non-stop improvize ON",
	"2 Note convention = English",
	"1 Note convention = French",
	"88 Note convention = Indian",
	"3 Note convention = key numbers",
	"49 Number streaks from 0",
	"50 Number streaks from 1",
	"33 Object prototypes",
	"183 Opcode OMS OFF",
	"182 Opcode OMS ON",
	"24 Open file �filename�",
	"63 Paste",
	"69 Pause",
	"13 Play selection in window �windowname�",
	"85 Play �any item�",
	"151 Play-show �int� times selection in window �windowname�",
	"7 Print window �windowname�",
	"119 Produce all items OFF",
	"120 Produce all items ON",
	"10 Produce items",
	"147 Produce and play �int� items",
	"11 Produce templates",
	"149 Prompt ON",
	"150 Prompt OFF",
	"65 Quantization �long� milliseconds",
	"72 Quantize OFF",
	"52 Quantize ON",
	"8 Quit",
	"56 Randomize",
	"174 Reset session time",
	"107 Reset interaction",
	"53 Reset keyboard",
	"55 Reset random sequence",
	"141 Reset controllers OFF",
	"142 Reset controllers ON",
	"135 Reset rule flags OFF",
	"136 Reset rule flags ON",
	"133 Reset rule weights OFF",
	"134 Reset rule weights ON",
	"176 Reset tick cycle",
	"68 Return",
	"74 Run script �filename�",
	"108 Scrap",
	"37 Script",
	"6 Select all in window �windowname�",
	"70 Set directory �long�",
	"180 Set output Csound file �filename�",
	"181 Set output MIDI file �filename�",
	"164 Set output window �windowname�",
	"57 Set random seed �unsigned�",
	"59 Set selection start �long�",
	"60 Set selection end �long�",
	"39 Set Vref �int�",
	"123 Show graphics OFF",
	"124 Show graphics ON",
	"139 Show messages OFF",
	"140 Show messages ON",
	"43 Smooth time",
	"44 Striated time",
	"32 Start string",
	"170 Stop",
	"129 Synchronize start OFF",
	"130 Synchronize start ON",
	"175 Tell session time",
	"45 Tempo �long� ticks in �long� secs",
	"160 Text Color OFF",
	"159 Text Color ON",
	"166 Tick cycle OFF",
	"165 Tick cycle ON",
	"173 Time base",
	"177 Time ticks OFF",
	"178 Time ticks ON",
	"54 Time resolution �long� milliseconds",
	"154 Time setting step OFF",
	"155 Time setting step ON",
	"156 Time setting trace OFF",
	"157 Time setting trace ON",
	"34 Trace",
	"16 Type �line�",
	"47 Use buffer limit OFF",
	"46 Use buffer limit ON",
	"117 Use each substitution OFF",
	"118 Use each substitution ON",
	"127 Use MIDI OFF",
	"128 Use MIDI ON",
	"67 Use tokens OFF",
	"66 Use tokens ON",
	"17 Wait �long� milliseconds",
	"14 Wait for �key stroke or MIDI event�",
	"145 (-",
	"78 MIDI all notes off channel �1..16�",
	"75 MIDI controller #�0..127� = �0..127� channel �1..16�",
	"83 MIDI decimal send �decimal data�",
	"84 MIDI hexa send �hexadecimal data�",
	"76 MIDI local control OFF channel �1..16�",
	"77 MIDI local control ON channel �1..16�",
	"81 MIDI Mono mode ON [�0..16� voices] channel �1..16�",
	"79 MIDI Omni mode OFF channel �1..16�",
	"80 MIDI Omni mode ON channel �1..16�",
	"82 MIDI Poly mode ON channel �1..16�",
	"71 MIDI program �1..128� [basic channel]",
	"190 MIDI send Start",
	"191 MIDI send Continue",
	"192 MIDI send Stop",
	"146 MIDI set basic channel to �1..16�",
	"58 MIDI set-up time �int� milliseconds",
	"86 MIDI switch ON �64..95� channel �1..16�",
	"87 MIDI switch OFF �64..95� channel �1..16�",
	"172 (-",
	"89 IN Derive further �note� channel �1..16� [toggle]",
	"93 IN End repeat �note� channel �1..16�",
	"106 IN Min �long� tick in �long� s �note� max �long� tick in �long� s �note� channel �1..16�",
	"188 IN Mute ON �note� channel �1..16�",
	"189 IN Mute OFF �note� channel �1..16�",
	"161 IN On �note� channel �1..16� do �script instruction�",
	"105 IN Param �Kx� = controller #�0..127� channel �1..16�",
	"15 IN Parameter �Kx� = velocity �note� channel �1..16�",
	"103 IN Play again item �note� channel �1..16�",
	"95 IN Quit �note� channel �1..16�",
	"94 IN Repeat forever �note� channel �1..16�",
	"92 IN Repeat 'v' times �note� channel �1..16� [v = velocity]",
	"90 IN Reset weights �note� channel �1..16� [toggle]",
	"99 IN Set computation time to 'v' �note� channel �1..16� [v = velocity]",
	"98 IN Set tempo controller #�0..127� channel �1..16� range �float�",
	"102 IN Skip next item �note� channel �1..16�",
	"100 IN Smooth-striated time �note� channel �1..16� [toggle]",
	"91 IN Start play �note� channel �1..16�",
	"104 IN Synchro tag �Wx� = �note� channel �1..16�",
	"97 IN Synchronize start ON-OFF �note� channel �1..16� [toggle]",
	"96 IN Use each substitution �note� channel �1..16� [toggle]",
	"101 IN Use-ignore object constraints �note� channel �1..16� [toggle]"
};


// TYPE STR# ;; Grammar procedures
// GrammarProcedures,304
#define NUM_GRAM_PROC_STRS	17

const char GramProcedure[NUM_GRAM_PROC_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"11 2 _goto",
	"0 2 _failed",
	"1 1 _repeat",
	"13 0 _stop",
	"4 0 _print",
	"6 0 _printOn",
	"5 0 _printOff",
	"12 0 _stepOn",
	"2 0 _stepOff",
	"15 0 _traceOn",
	"16 0 _traceOff",
	"8 0 _destru",
	"7 0 _randomize",
	"3 1 _mm",
	"14 0 _striated",
	"10 0 _smooth",
	"9 1 _srand"
};


// TYPE STR# ;; Tools and performance controls
// ToolsPerfControls,305
#define NUM_PERF_CONTROL_STRS	66

const char PerformanceControl[NUM_PERF_CONTROL_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"22 1 _chan",
	"28 1 _vel",
	"21 0 _velstep",
	"0 0 _velcont",
	"46 1 _script",
	"47 1 _mod",
	"43 0 _modstep",
	"52 0 _modcont",
	"58 1 _pitchbend",
	"19 0 _pitchstep",
	"54 0 _pitchcont",
	"53 1 _press",
	"55 0 _presstep",
	"5 0 _presscont",
	"7 2 _switchon",
	"24 2 _switchoff",
	"31 1 _volume",
	"6 0 _volumestep",
	"51 0 _volumecont",
	"36 1 _legato",
	"38 1 _staccato",
	"41 0 _articulstep",
	"39 0 _articulcont",
	"40 0 _velfixed",
	"37 0 _modfixed",
	"8 0 _pitchfixed",
	"10 0 _pressfixed",
	"25 0 _volumefixed",
	"29 0 _articulfixed",
	"30 1 _pitchrange",
	"9 1 _pitchrate",
	"11 1 _modrate",
	"13 1 _pressrate",
	"26 1 _transpose",
	"32 1 _volumerate",
	"12 1 _volumecontrol",
	"50 1 _pan",
	"49 0 _panstep",
	"59 0 _pancont",
	"56 0 _panfixed",
	"42 1 _panrate",
	"48 1 _pancontrol",
	"57 0 _rest",
	"4 1 _ins",
	"60 2 _value",
	"20 1 _step",
	"45 1 _cont",
	"15 1 _fixed",
	"14 0 _retro",
	"61 0 _rndseq",
	"33 0 _randomize",
	"63 0 _ordseq",
	"62 4 _keymap",
	"64 0 _mapfixed",
	"44 0 _mapcont",
	"1 0 _mapstep",
	"3 1 _rndvel",
	"23 1 _rotate",
	"2 2 _keyxpand",
	"16 1 _rndtime",
	"18 1 _srand",
	"35 1 _tempo",
	"27 0 _transposefixed",
	"34 0 _transposecont",
	"17 0 _transposestep", 
	"65 2 _scale"
};


// TYPE STR# ;; GeneralMIDI patches
// GeneralMIDIpatches,306
#define NUM_GEN_MIDI_PATCH_STRS	128

const char GeneralMidiPatchName[NUM_GEN_MIDI_PATCH_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"1 AcousticGrandPiano ",
	"2 BrightAcousticPiano",
	"3 ElectricGrandPiano ",
	"4 HonkyTonkPiano ",
	"5 RhodesPiano",
	"6 ChorusedPiano",
	"7 Harpsichord",
	"8 ClavinetChromatic ",
	"9 Calesta",
	"10 Glockenspiel",
	"11 MusicBox",
	"12 Vibraphone",
	"13 Marimba",
	"14 Xylophone ",
	"15 TubularBells ",
	"16 Dulcimer",
	"17 DrawbarOrgan",
	"18 PercussiveOrgan",
	"19 RockOrgan",
	"20 ChurchOrgan",
	"21 ReedOrgan",
	"22 Accoridan",
	"23 Harmonica",
	"24 TangoAccordian",
	"25 AcousticGuitarNylon",
	"26 AcousticGuitarSteel",
	"27 ElectricGuitarJazz",
	"28 ElectricGuitarClean",
	"29 ElectricGuitarMuted",
	"30 OverDrivenGuitar",
	"31 DistortionGuitar",
	"32 GuitarHarmonics",
	"33 AcousticBass",
	"34 ElectricBassFinger",
	"35 ElectricBassPick",
	"36 FretlessBass",
	"37 SlapBass1",
	"38 SlapBass2",
	"39 SynthBass1",
	"40 SynthBass2",
	"41 Violin",
	"42 Viola",
	"43 Cello",
	"44 Contrabass",
	"45 TremoloStrings",
	"46 PizzicatoStrings",
	"47 OrchestralStrings",
	"48 Timpani",
	"49 StringEnsemble1",
	"50 StringEnsemble2",
	"51 SynthStrings1",
	"52 SynthStrings2",
	"53 ChoirAahs",
	"54 VoiceOohs",
	"55 SynthVoice",
	"56 OrchestraHit",
	"57 Trumpet",
	"58 Trombone",
	"59 Tuba",
	"60 MutedTrumped",
	"61 FrenchHorn",
	"62 BrassSection",
	"63 SynthBrass1",
	"64 SynthBrass2",
	"65 SopranoSax",
	"66 AltoSax",
	"67 TenorSax",
	"68 BaritoneSax",
	"69 Oboe",
	"70 EnglishHorn",
	"71 Bassoon",
	"72 Clarinet",
	"73 Piccolo",
	"74 Flute",
	"75 Recorder",
	"76 PanFlute",
	"77 BottleBlow",
	"78 Shakuhachi",
	"79 Whistle",
	"80 Ocarina",
	"81 Lead1 square",
	"82 Lead2 sawtooth",
	"83 Lead3 calliope",
	"84 Lead4 chiff",
	"85 Lead5 charang",
	"86 Lead6 voice",
	"87 Lead7 fifths",
	"88 Lead8 bass+lead",
	"89 Pad1 new age",
	"90 Pad2 warm",
	"91 Pad3 polysynth",
	"92 Pad4 choir",
	"93 Pad5 bowed",
	"94 Pad6 metallic",
	"95 Pad7 halo",
	"96 Pad8 sweep",
	"97 FX1 rain",
	"98 FX2 soundtrack",
	"99 FX3 crystal",
	"100 FX4 atmosphere",
	"101 FX5 brightness",
	"102 FX6 goblins",
	"103 FX7 echoes",
	"104 FX8 sci-fi",
	"105 Sitar",
	"106 Banjo",
	"107 Shamisen",
	"108 Koto",
	"109 Kalimba",
	"110 Bagpipe",
	"111 Fiddle",
	"112 Shahnai",
	"113 TinkleBell",
	"114 Agogo",
	"115 SteelDrums",
	"116 WoodBlock",
	"117 TaikoDrum",
	"118 MelodicTom",
	"119 SynthDrum",
	"120 ReverseCymbal",
	"121 GuitarFretNoise",
	"122 BreathNoise",
	"123 Seashore",
	"124 BirdTweet",
	"125 TelephoneRing",
	"126 Helicopter",
	"127 Applause",
	"128 Gunshot"
};


// TYPE STR# ;; HTML entities for diacritical chars and other special chars
// HTMLdiacritical,307
#define NUM_HTML_DIACRITICAL_STRS	124

// NOTE:  "high ASCII" chars below are in Mac OS Roman encoding
// FIXME:  Convert these chars to octal codes?
const char HTMLdiacritical[NUM_HTML_DIACRITICAL_STRS][MAX_STRINGLISTS_STR_LEN] = 
{
	"amp",
	"&",
	"gt",
	">",
	"lt",
	"<",
	"quot",
	"\"",
	"nbsp",
	" ",		// just an ordinary space, not nbsp char
	"AElig",
	"�",
	"Aacute",
	"�",
	"Acirc",
	"�",
	"Agrave",
	"�",
	"Aring",
	"�",
	"Atilde",
	"�",
	"Auml",
	"�",
	"aelig",
	"�",
	"aacute",
	"�",
	"acirc",
	"�",
	"agrave",
	"�",
	"aring",
	"�",
	"atilde",
	"�",
	"auml",
	"�",
	"Ccedil",
	"�",
	"ccedil",
	"�",
	"Eacute",
	"�",
	"Ecirc",
	"�",
	"Egrave",
	"�",
	"Euml",
	"�",
	"eacute",
	"�",
	"ecirc",
	"�",
	"egrave",
	"�",
	"euml",
	"�",
	"Iacute",
	"�",
	"Icirc",
	"�",
	"Igrave",
	"�",
	"Iuml",
	"�",
	"iacute",
	"�",
	"icirc",
	"�",
	"igrave",
	"�",
	"iuml",
	"�",
	"Ntilde",
	"�",
	"ntilde",
	"�",
	"Oacute",
	"�",
	"Ocirc",
	"�",
	"Ograve",
	"�",
	"Oslash",
	"�",
	"Otilde",
	"�",
	"Ouml",
	"�",
	"oacute",
	"�",
	"ocirc",
	"�",
	"ograve",
	"�",
	"oslash",
	"�",
	"otilde",
	"�",
	"ouml",
	"�",
	"Uacute",
	"�",
	"Ucirc",
	"�",
	"Ugrave",
	"�",
	"Uuml",
	"�",
	"uacute",
	"�",
	"ucirc",
	"�",
	"ugrave",
	"�",
	"uuml",
	"�",
	"Yacute",
	"Y",
	"yuml",
	"�",
	"yacute",
	"y"
};


#endif /* BP_STRINGLISTS_H */

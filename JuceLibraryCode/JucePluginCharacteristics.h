/*

    IMPORTANT! This file is auto-generated each time you save your
    project - if you alter its contents, your changes may be overwritten!

    This header file contains configuration options for the plug-in. If you need to change any of
    these, it'd be wise to do so using the Jucer, rather than editing this file directly...

*/

#ifndef __PLUGINCHARACTERISTICS_MA7CM5__
#define __PLUGINCHARACTERISTICS_MA7CM5__

#define JucePlugin_Build_VST    1  // (If you change this value, you'll also need to re-export the projects using the Jucer)
#define JucePlugin_Build_AU     0  // (If you change this value, you'll also need to re-export the projects using the Jucer)
#define JucePlugin_Build_RTAS   0  // (If you change this value, you'll also need to re-export the projects using the Jucer)

#define JucePlugin_Name                 "BrocoliPlayer"
#define JucePlugin_Desc                 "BrocoliPlayer"
#define JucePlugin_Manufacturer         "Brocoli"
#define JucePlugin_ManufacturerCode     'BROC'
#define JucePlugin_PluginCode           'BRPL'
#define JucePlugin_MaxNumInputChannels  0
#define JucePlugin_MaxNumOutputChannels 2
#define JucePlugin_PreferredChannelConfigurations   {0, 2}
#define JucePlugin_IsSynth              1
#define JucePlugin_WantsMidiInput       1
#define JucePlugin_ProducesMidiOutput   0
#define JucePlugin_SilenceInProducesSilenceOut  0
#define JucePlugin_TailLengthSeconds    0
#define JucePlugin_EditorRequiresKeyboardFocus  1
#define JucePlugin_VersionCode          0x10000
#define JucePlugin_VersionString        "1.0.0"
#define JucePlugin_VSTUniqueID          JucePlugin_PluginCode
#define JucePlugin_VSTCategory          kPlugCategSynth
#define JucePlugin_AUMainType           kAudioUnitType_MusicDevice
#define JucePlugin_AUSubType            JucePlugin_PluginCode
#define JucePlugin_AUExportPrefix       BrocoliPlayerAU
#define JucePlugin_AUExportPrefixQuoted "BrocoliPlayerAU"
#define JucePlugin_AUManufacturerCode   JucePlugin_ManufacturerCode
#define JucePlugin_CFBundleIdentifier   org.brocoli.BrocoliPlayer
#define JucePlugin_AUCocoaViewClassName BrocoliPlayerAU_V1
#define JucePlugin_RTASCategory         ePlugInCategory_SWGenerators
#define JucePlugin_RTASManufacturerCode JucePlugin_ManufacturerCode
#define JucePlugin_RTASProductId        JucePlugin_PluginCode
#define JUCE_USE_VSTSDK_2_4             1

#endif   // __PLUGINCHARACTERISTICS_MA7CM5__

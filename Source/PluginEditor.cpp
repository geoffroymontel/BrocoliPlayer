/*
  ==============================================================================

    This file was auto-generated by the Jucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
BrocoliPlayerAudioProcessorEditor::BrocoliPlayerAudioProcessorEditor (BrocoliPlayerAudioProcessor* ownerFilter)
    : AudioProcessorEditor (ownerFilter)
{
    // This is where our plugin's editor size is set.
    setSize (400, 300);
}

BrocoliPlayerAudioProcessorEditor::~BrocoliPlayerAudioProcessorEditor()
{
}

//==============================================================================
void BrocoliPlayerAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::white);
    g.setColour (Colours::black);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!",
                      0, 0, getWidth(), getHeight(),
                      Justification::centred, 1);
}

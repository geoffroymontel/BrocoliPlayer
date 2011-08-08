/*
  ==============================================================================

    This file was auto-generated by the Jucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
BrocoliPlayerAudioProcessor::BrocoliPlayerAudioProcessor()
{
}

BrocoliPlayerAudioProcessor::~BrocoliPlayerAudioProcessor()
{
}

//==============================================================================
const String BrocoliPlayerAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

int BrocoliPlayerAudioProcessor::getNumParameters()
{
    return 0;
}

float BrocoliPlayerAudioProcessor::getParameter (int index)
{
    return 0.0f;
}

void BrocoliPlayerAudioProcessor::setParameter (int index, float newValue)
{
}

const String BrocoliPlayerAudioProcessor::getParameterName (int index)
{
    return String::empty;
}

const String BrocoliPlayerAudioProcessor::getParameterText (int index)
{
    return String::empty;
}

const String BrocoliPlayerAudioProcessor::getInputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

const String BrocoliPlayerAudioProcessor::getOutputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

bool BrocoliPlayerAudioProcessor::isInputChannelStereoPair (int index) const
{
    return true;
}

bool BrocoliPlayerAudioProcessor::isOutputChannelStereoPair (int index) const
{
    return true;
}

bool BrocoliPlayerAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
    return true;
#else
    return false;
#endif
}

bool BrocoliPlayerAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
    return true;
#else
    return false;
#endif
}

int BrocoliPlayerAudioProcessor::getNumPrograms()
{
    return 0;
}

int BrocoliPlayerAudioProcessor::getCurrentProgram()
{
    return 0;
}

void BrocoliPlayerAudioProcessor::setCurrentProgram (int index)
{
}

const String BrocoliPlayerAudioProcessor::getProgramName (int index)
{
    return String::empty;
}

void BrocoliPlayerAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void BrocoliPlayerAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
}

void BrocoliPlayerAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

void BrocoliPlayerAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    // This is the place where you'd normally do the guts of your plugin's
    // audio processing...
    for (int channel = 0; channel < getNumInputChannels(); ++channel)
    {
        float* channelData = buffer.getSampleData (channel);

        // ..do something to the data...
    }

    // In case we have more outputs than inputs, we'll clear any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)
    {
        buffer.clear (i, 0, buffer.getNumSamples());
    }
}

//==============================================================================
bool BrocoliPlayerAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* BrocoliPlayerAudioProcessor::createEditor()
{
    return new BrocoliPlayerAudioProcessorEditor (this);
}

//==============================================================================
void BrocoliPlayerAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void BrocoliPlayerAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new BrocoliPlayerAudioProcessor();
}
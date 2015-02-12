#include "utilsplugin.h"
#include <qqml.h>
#include "speechrecognition.h"
#include "texttospeech.h"
#include "randompassword.h"


void MangoPlugin::registerTypes(const char *uri)
{
    // @uri Mango.Utils
    qmlRegisterType<RandomPassword>(uri,0,1 ,"RandomPassword");
    // Utils
    qmlRegisterType<SpeechRecognition>(uri, 0, 1, "SpeechRecognition");
    qmlRegisterType<TextToSpeech>(uri, 0, 1, "TextToSpeech");
}

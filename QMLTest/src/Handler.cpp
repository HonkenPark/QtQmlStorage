
#include "hdr/Handler.h"

Handler::Handler(){

    ReflashQML();

}


Handler::~Handler()
{

}


void Handler::ReflashQML()
{
    QVariantList varTemp;
    varTemp << 1;
    emit ScreenDataParsing((QVariant)varTemp);
}


void Handler::QMLEvent()
{


}

///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Pre-Processor & Forward Declarations
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include <Arduino.h>
#include <Global_Utilities.h>
#include <Communication_Protocol.h>


///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Request Decoder 
///////////////////////////////////////////////////////////////////////////////////////////////////

class RequestDecoder {
  private:
    Buffer<uint8_t> &requestBuffer;

  public:
    void decodeRequests(Buffer<uint8_t>& requestBuffer);

  private:
};


///////////////////////////////////////////////////////////////////////////////////////////////////
//// SECTION -> Response Encoder 
///////////////////////////////////////////////////////////////////////////////////////////////////

const int16_t RESPONSE_MAX_SIZE = 16;

class ResponseEncoder {
  private:
    Buffer<uint8_t> &responseBuffer;
    Request &req;

  public:
    ResponseEncoder &begin(Request &req);

    ResponseEncoder &end();

};



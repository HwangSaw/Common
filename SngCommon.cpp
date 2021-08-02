// SngCommon.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "SngCommon.h"

static const PNGUID protocolV =
{ 0xbe3ab433,0x18ef,0x44fa,{0xbe,0xcb,0x50,0x8a,0x6f,0x9d,0x1b,0x77} };


Guid g_sngProtocolVersion = Guid::From(protocolV);


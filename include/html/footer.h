#ifndef __FOOTER_H__
#define __FOOTER_H__

#include <Arduino.h>

const char footer_html[] PROGMEM = {
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x2f, 0x64, 0x69,
  0x76, 0x3e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x2f, 0x64, 0x69, 0x76,
  0x3e, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x73, 0x63, 0x72, 0x69,
  0x70, 0x74, 0x3e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x28, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x77, 0x69,
  0x6e, 0x64, 0x6f, 0x77, 0x2c, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65,
  0x6e, 0x74, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65,
  0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e,
  0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x27, 0x74, 0x6f, 0x67, 0x67, 0x6c,
  0x65, 0x27, 0x29, 0x2e, 0x61, 0x64, 0x64, 0x45, 0x76, 0x65, 0x6e, 0x74,
  0x4c, 0x69, 0x73, 0x74, 0x65, 0x6e, 0x65, 0x72, 0x28, 0x27, 0x63, 0x6c,
  0x69, 0x63, 0x6b, 0x27, 0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69,
  0x6f, 0x6e, 0x28, 0x65, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74,
  0x45, 0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28,
  0x27, 0x74, 0x75, 0x63, 0x6b, 0x65, 0x64, 0x4d, 0x65, 0x6e, 0x75, 0x27,
  0x29, 0x2e, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x69, 0x73, 0x74, 0x2e,
  0x74, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x28, 0x27, 0x63, 0x75, 0x73, 0x74,
  0x6f, 0x6d, 0x2d, 0x6d, 0x65, 0x6e, 0x75, 0x2d, 0x74, 0x75, 0x63, 0x6b,
  0x65, 0x64, 0x27, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f,
  0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c,
  0x65, 0x6d, 0x65, 0x6e, 0x74, 0x42, 0x79, 0x49, 0x64, 0x28, 0x27, 0x74,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x27, 0x29, 0x2e, 0x63, 0x6c, 0x61, 0x73,
  0x73, 0x4c, 0x69, 0x73, 0x74, 0x2e, 0x74, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x28, 0x27, 0x78, 0x27, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x3b, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29, 0x28, 0x74, 0x68,
  0x69, 0x73, 0x2c, 0x20, 0x74, 0x68, 0x69, 0x73, 0x2e, 0x64, 0x6f, 0x63,
  0x75, 0x6d, 0x65, 0x6e, 0x74, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x3c, 0x2f, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x3e, 0x0a, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x3c, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x20, 0x74,
  0x79, 0x70, 0x65, 0x3d, 0x27, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x6a, 0x61,
  0x76, 0x61, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x27, 0x3e, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x69,
  0x2c, 0x20, 0x61, 0x63, 0x63, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x63, 0x75,
  0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x67, 0x65, 0x74, 0x45, 0x6c, 0x65, 0x6d,
  0x65, 0x6e, 0x74, 0x73, 0x42, 0x79, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4e,
  0x61, 0x6d, 0x65, 0x28, 0x27, 0x61, 0x63, 0x63, 0x6f, 0x72, 0x64, 0x69,
  0x6f, 0x6e, 0x27, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x20, 0x3d, 0x20, 0x30,
  0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x61, 0x63, 0x63, 0x2e, 0x6c, 0x65,
  0x6e, 0x67, 0x74, 0x68, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20, 0x61,
  0x63, 0x63, 0x5b, 0x69, 0x5d, 0x2e, 0x61, 0x64, 0x64, 0x45, 0x76, 0x65,
  0x6e, 0x74, 0x4c, 0x69, 0x73, 0x74, 0x65, 0x6e, 0x65, 0x72, 0x28, 0x27,
  0x63, 0x6c, 0x69, 0x63, 0x6b, 0x27, 0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63,
  0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x74, 0x68, 0x69,
  0x73, 0x2e, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x69, 0x73, 0x74, 0x2e,
  0x74, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x28, 0x27, 0x61, 0x63, 0x74, 0x69,
  0x76, 0x65, 0x27, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x65, 0x20,
  0x3d, 0x20, 0x74, 0x68, 0x69, 0x73, 0x2e, 0x6e, 0x65, 0x78, 0x74, 0x45,
  0x6c, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x53, 0x69, 0x62, 0x6c, 0x69, 0x6e,
  0x67, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x27, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x27, 0x20, 0x3d,
  0x3d, 0x3d, 0x20, 0x65, 0x2e, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x64,
  0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x3f, 0x20, 0x65, 0x2e, 0x73,
  0x74, 0x79, 0x6c, 0x65, 0x2e, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79,
  0x20, 0x3d, 0x20, 0x27, 0x6e, 0x6f, 0x6e, 0x65, 0x27, 0x20, 0x3a, 0x20,
  0x65, 0x2e, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x64, 0x69, 0x73, 0x70,
  0x6c, 0x61, 0x79, 0x20, 0x3d, 0x20, 0x27, 0x62, 0x6c, 0x6f, 0x63, 0x6b,
  0x27, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x29,
  0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x2f, 0x73, 0x63, 0x72, 0x69,
  0x70, 0x74, 0x3e, 0x0a, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0x0a,
  0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e
, 0x00 };
unsigned int footer_html_len = 811;

#endif

/*********************************************************
  Copyright (C), AirM2M Tech. Co., Ltd.
  Author: lifei
  Description: AMOPENAT 开放平台
  Others:
  History: 
    Version： Date:       Author:   Modification:
    V0.1      2012.12.14  lifei     创建文件
*********************************************************/
#ifndef AM_OPENAT_IMAGE_H
#define AM_OPENAT_IMAGE_H

#include "am_openat_common.h"

typedef struct
{
     UINT16 width;
     UINT16 height;
     UINT8  format;
     UINT16*             buffer;     
}T_AMOPENAT_IMAGE_INFO;

INT32 OPENAT_ImgsDecode(CONST UINT16 * filename,T_AMOPENAT_IMAGE_INFO *imageinfo);
INT32 OPENAT_ImgsFreeDecodedata(UINT16* buffer);
#endif /* AM_OPENAT_IMAGE_H */


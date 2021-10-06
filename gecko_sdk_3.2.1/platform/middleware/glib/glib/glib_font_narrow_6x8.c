/***************************************************************************//**
 * @file
 * @brief Silicon Labs Graphics Library: GLIB font narrow 6x8
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/* Standard C header files */
#include <stdint.h>
#include "glib.h"

/** @brief Pixel data for the "GLIB_FontNarrow6x8" font. */
static const uint8_t GLIB_FontNarrow6x8PixMap[] =
{
  0x00, 0x04, 0x0a, 0x0a, 0x04, 0x03, 0x06, 0x06, 0x08, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0x04, 0x0e, 0x1f, 0x08, 0x1f, 0x0c, 0x1f,
  0x0e, 0x0e, 0x00, 0x00, 0x10, 0x00, 0x01, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e,
  0x07, 0x1f, 0x1f, 0x0e, 0x11, 0x0e, 0x1c, 0x11, 0x01, 0x11, 0x11, 0x0e,
  0x0f, 0x0e, 0x0f, 0x1e, 0x1f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1f, 0x0e,
  0x00, 0x0e, 0x04, 0x00, 0x02, 0x00, 0x01, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x01, 0x04, 0x08, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0a, 0x0a, 0x1e, 0x13, 0x09, 0x04,
  0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x11, 0x06, 0x11, 0x08,
  0x0c, 0x01, 0x02, 0x10, 0x11, 0x11, 0x06, 0x06, 0x08, 0x00, 0x02, 0x11,
  0x10, 0x11, 0x11, 0x11, 0x09, 0x01, 0x01, 0x11, 0x11, 0x04, 0x08, 0x09,
  0x01, 0x1b, 0x11, 0x11, 0x11, 0x11, 0x11, 0x01, 0x04, 0x11, 0x11, 0x11,
  0x11, 0x11, 0x10, 0x02, 0x00, 0x08, 0x0a, 0x00, 0x04, 0x00, 0x01, 0x00,
  0x10, 0x00, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
  0x04, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0a, 0x1f,
  0x01, 0x08, 0x05, 0x02, 0x02, 0x08, 0x15, 0x04, 0x00, 0x00, 0x00, 0x10,
  0x19, 0x04, 0x10, 0x04, 0x0a, 0x0f, 0x01, 0x08, 0x11, 0x11, 0x06, 0x06,
  0x04, 0x1f, 0x04, 0x10, 0x10, 0x11, 0x11, 0x01, 0x11, 0x01, 0x01, 0x01,
  0x11, 0x04, 0x08, 0x05, 0x01, 0x15, 0x13, 0x11, 0x11, 0x11, 0x11, 0x01,
  0x04, 0x11, 0x11, 0x11, 0x0a, 0x11, 0x08, 0x02, 0x01, 0x08, 0x11, 0x00,
  0x08, 0x0e, 0x0d, 0x0e, 0x16, 0x0e, 0x02, 0x11, 0x0d, 0x06, 0x0c, 0x09,
  0x04, 0x0b, 0x0d, 0x0e, 0x0f, 0x16, 0x0d, 0x0e, 0x07, 0x11, 0x11, 0x11,
  0x11, 0x11, 0x1f, 0x02, 0x04, 0x08, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x00, 0x0a, 0x0e, 0x04, 0x02, 0x00, 0x02, 0x08, 0x0e, 0x1f,
  0x00, 0x1f, 0x00, 0x08, 0x15, 0x04, 0x08, 0x08, 0x09, 0x10, 0x0f, 0x04,
  0x0e, 0x1e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x16, 0x11, 0x0f, 0x01,
  0x11, 0x0f, 0x0f, 0x1d, 0x1f, 0x04, 0x08, 0x03, 0x01, 0x15, 0x15, 0x11,
  0x0f, 0x11, 0x0f, 0x0e, 0x04, 0x11, 0x11, 0x15, 0x04, 0x0a, 0x04, 0x02,
  0x02, 0x08, 0x00, 0x00, 0x00, 0x10, 0x13, 0x01, 0x19, 0x11, 0x07, 0x11,
  0x13, 0x04, 0x08, 0x05, 0x04, 0x15, 0x13, 0x11, 0x11, 0x19, 0x13, 0x01,
  0x02, 0x11, 0x11, 0x11, 0x0a, 0x11, 0x08, 0x01, 0x04, 0x10, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x10, 0x02, 0x15, 0x00,
  0x02, 0x08, 0x15, 0x04, 0x06, 0x00, 0x00, 0x04, 0x13, 0x04, 0x04, 0x10,
  0x1f, 0x10, 0x11, 0x02, 0x11, 0x10, 0x06, 0x06, 0x04, 0x1f, 0x04, 0x04,
  0x15, 0x1f, 0x11, 0x01, 0x11, 0x01, 0x01, 0x11, 0x11, 0x04, 0x08, 0x05,
  0x01, 0x11, 0x19, 0x11, 0x01, 0x15, 0x05, 0x10, 0x04, 0x11, 0x11, 0x15,
  0x0a, 0x04, 0x02, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x1e, 0x11, 0x01,
  0x11, 0x1f, 0x02, 0x1e, 0x11, 0x04, 0x08, 0x03, 0x04, 0x15, 0x11, 0x11,
  0x0f, 0x1e, 0x01, 0x0e, 0x02, 0x11, 0x11, 0x15, 0x04, 0x1e, 0x04, 0x02,
  0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a,
  0x0f, 0x19, 0x09, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x06, 0x02,
  0x11, 0x04, 0x02, 0x11, 0x08, 0x11, 0x11, 0x02, 0x11, 0x08, 0x06, 0x04,
  0x08, 0x00, 0x02, 0x00, 0x15, 0x11, 0x11, 0x11, 0x09, 0x01, 0x01, 0x11,
  0x11, 0x04, 0x09, 0x09, 0x01, 0x11, 0x11, 0x11, 0x01, 0x09, 0x09, 0x10,
  0x04, 0x11, 0x0a, 0x15, 0x11, 0x04, 0x01, 0x02, 0x08, 0x08, 0x00, 0x00,
  0x00, 0x11, 0x11, 0x11, 0x11, 0x01, 0x02, 0x10, 0x11, 0x04, 0x09, 0x05,
  0x04, 0x11, 0x11, 0x11, 0x01, 0x10, 0x01, 0x10, 0x12, 0x19, 0x0a, 0x15,
  0x0a, 0x10, 0x02, 0x02, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x00, 0x0a, 0x04, 0x18, 0x16, 0x00, 0x08, 0x02, 0x00, 0x00,
  0x02, 0x00, 0x06, 0x01, 0x0e, 0x0e, 0x1f, 0x0e, 0x08, 0x0e, 0x0e, 0x02,
  0x0e, 0x06, 0x00, 0x02, 0x10, 0x00, 0x01, 0x04, 0x0e, 0x11, 0x0f, 0x0e,
  0x07, 0x1f, 0x01, 0x0e, 0x11, 0x0e, 0x06, 0x11, 0x1f, 0x11, 0x11, 0x0e,
  0x01, 0x16, 0x11, 0x0f, 0x04, 0x0e, 0x04, 0x0a, 0x11, 0x04, 0x1f, 0x0e,
  0x10, 0x0e, 0x00, 0x1f, 0x00, 0x1e, 0x0f, 0x0e, 0x1e, 0x0e, 0x02, 0x0e,
  0x11, 0x0e, 0x06, 0x09, 0x0e, 0x11, 0x11, 0x0e, 0x01, 0x10, 0x01, 0x0f,
  0x0c, 0x16, 0x04, 0x0a, 0x11, 0x0e, 0x1f, 0x0c, 0x04, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/**
 * @brief Narrow 6x8 pixels font containing characters and numbers.
 */
const GLIB_Font_t GLIB_FontNarrow6x8 = { (void *)GLIB_FontNarrow6x8PixMap,
                                         sizeof(GLIB_FontNarrow6x8PixMap),
                                         sizeof(GLIB_FontNarrow6x8PixMap[0]),
                                         100, 6, 8, 2, 0, FullFont };

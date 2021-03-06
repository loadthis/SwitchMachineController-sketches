#ifndef _SWITCH_MACHINE_CMDS__H_
#define _SWITCH_MACHINE_CMDS__H_

// NOTE: A copy of this file also exists under
// the I2C_Master sketch.  Both must
// contain the same content.

// Each command code has a Hamming distance
// of at least 2 bits from all other codes.
// Additional codes which would meet this
// criterion are (using only high 4 bits):
//   0x80  0xC0  0xE0  0xF0

enum E_CMD {
  eMain    = 0x10,
  eDiv     = 0x20,
  eRefresh = 0x40,
  eReset   = 0x70
};

enum E_CHAN {
  eChan0 = 0x01,
  eChan1 = 0x02,
  eChan2 = 0x04,
  eChan3 = 0x07
};

#endif


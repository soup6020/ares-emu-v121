#define a RFP
#define p RFP - 1 & 3

template<> auto TLCS900H::map(Register<n8> register) const -> maybe<n8&> {
  switch(register.id) {
  #define r(id, name) case id: return r.name;
  r(0x00, xwa[0].b0) r(0x01, xwa[0].b1) r(0x02, xwa[0].b2) r(0x03, xwa[0].b3)
  r(0x04, xbc[0].b0) r(0x05, xbc[0].b1) r(0x06, xbc[0].b2) r(0x07, xbc[0].b3)
  r(0x08, xde[0].b0) r(0x09, xde[0].b1) r(0x0a, xde[0].b2) r(0x0b, xde[0].b3)
  r(0x0c, xhl[0].b0) r(0x0d, xhl[0].b1) r(0x0e, xhl[0].b2) r(0x0f, xhl[0].b3)
  r(0x10, xwa[1].b0) r(0x11, xwa[1].b1) r(0x12, xwa[1].b2) r(0x13, xwa[1].b3)
  r(0x14, xbc[1].b0) r(0x15, xbc[1].b1) r(0x16, xbc[1].b2) r(0x17, xbc[1].b3)
  r(0x18, xde[1].b0) r(0x19, xde[1].b1) r(0x1a, xde[1].b2) r(0x1b, xde[1].b3)
  r(0x1c, xhl[1].b0) r(0x1d, xhl[1].b1) r(0x1e, xhl[1].b2) r(0x1f, xhl[1].b3)
  r(0x20, xwa[2].b0) r(0x21, xwa[2].b1) r(0x22, xwa[2].b2) r(0x23, xwa[2].b3)
  r(0x24, xbc[2].b0) r(0x25, xbc[2].b1) r(0x26, xbc[2].b2) r(0x27, xbc[2].b3)
  r(0x28, xde[2].b0) r(0x29, xde[2].b1) r(0x2a, xde[2].b2) r(0x2b, xde[2].b3)
  r(0x2c, xhl[2].b0) r(0x2d, xhl[2].b1) r(0x2e, xhl[2].b2) r(0x2f, xhl[2].b3)
  r(0x30, xwa[3].b0) r(0x31, xwa[3].b1) r(0x32, xwa[3].b2) r(0x33, xwa[3].b3)
  r(0x34, xbc[3].b0) r(0x35, xbc[3].b1) r(0x36, xbc[3].b2) r(0x37, xbc[3].b3)
  r(0x38, xde[3].b0) r(0x39, xde[3].b1) r(0x3a, xde[3].b2) r(0x3b, xde[3].b3)
  r(0x3c, xhl[3].b0) r(0x3d, xhl[3].b1) r(0x3e, xhl[3].b2) r(0x3f, xhl[3].b3)
  r(0xd0, xwa[p].b0) r(0xd1, xwa[p].b1) r(0xd2, xwa[p].b2) r(0xd3, xwa[p].b3)
  r(0xd4, xbc[p].b0) r(0xd5, xbc[p].b1) r(0xd6, xbc[p].b2) r(0xd7, xbc[p].b3)
  r(0xd8, xde[p].b0) r(0xd9, xde[p].b1) r(0xda, xde[p].b2) r(0xdb, xde[p].b3)
  r(0xdc, xhl[p].b0) r(0xdd, xhl[p].b1) r(0xde, xhl[p].b2) r(0xdf, xhl[p].b3)
  r(0xe0, xwa[a].b0) r(0xe1, xwa[a].b1) r(0xe2, xwa[a].b2) r(0xe3, xwa[a].b3)
  r(0xe4, xbc[a].b0) r(0xe5, xbc[a].b1) r(0xe6, xbc[a].b2) r(0xe7, xbc[a].b3)
  r(0xe8, xde[a].b0) r(0xe9, xde[a].b1) r(0xea, xde[a].b2) r(0xeb, xde[a].b3)
  r(0xec, xhl[a].b0) r(0xed, xhl[a].b1) r(0xee, xhl[a].b2) r(0xef, xhl[a].b3)
  r(0xf0, xix   .b0) r(0xf1, xix   .b1) r(0xf2, xix   .b2) r(0xf3, xix   .b3)
  r(0xf4, xiy   .b0) r(0xf5, xiy   .b1) r(0xf6, xiy   .b2) r(0xf7, xiy   .b3)
  r(0xf8, xiz   .b0) r(0xf9, xiz   .b1) r(0xfa, xiz   .b2) r(0xfb, xiz   .b3)
  r(0xfc, xsp   .b0) r(0xfd, xsp   .b1) r(0xfe, xsp   .b2) r(0xff, xsp   .b3)
  #undef r
  }
  return nothing;
}

template<> auto TLCS900H::map(Register<n16> register) const -> maybe<n16&> {
  switch(register.id & ~1) {
  #define r(id, name) case id: return r.name;
  r(0x00, xwa[0].w0) r(0x02, xwa[0].w1) r(0x04, xbc[0].w0) r(0x06, xbc[0].w1)
  r(0x08, xde[0].w0) r(0x0a, xde[0].w1) r(0x0c, xhl[0].w0) r(0x0e, xhl[0].w1)
  r(0x10, xwa[1].w0) r(0x12, xwa[1].w1) r(0x14, xbc[1].w0) r(0x16, xbc[1].w1)
  r(0x18, xde[1].w0) r(0x1a, xde[1].w1) r(0x1c, xhl[1].w0) r(0x1e, xhl[1].w1)
  r(0x20, xwa[2].w0) r(0x22, xwa[2].w1) r(0x24, xbc[2].w0) r(0x26, xbc[2].w1)
  r(0x28, xde[2].w0) r(0x2a, xde[2].w1) r(0x2c, xhl[2].w0) r(0x2e, xhl[2].w1)
  r(0x30, xwa[3].w0) r(0x32, xwa[3].w1) r(0x34, xbc[3].w0) r(0x36, xbc[3].w1)
  r(0x38, xde[3].w0) r(0x3a, xde[3].w1) r(0x3c, xhl[3].w0) r(0x3e, xhl[3].w1)
  r(0xd0, xwa[p].w0) r(0xd2, xwa[p].w1) r(0xd4, xbc[p].w0) r(0xd6, xbc[p].w1)
  r(0xd8, xde[p].w0) r(0xda, xde[p].w1) r(0xdc, xhl[p].w0) r(0xde, xhl[p].w1)
  r(0xe0, xwa[a].w0) r(0xe2, xwa[a].w1) r(0xe4, xbc[a].w0) r(0xe6, xbc[a].w1)
  r(0xe8, xde[a].w0) r(0xea, xde[a].w1) r(0xec, xhl[a].w0) r(0xee, xhl[a].w1)
  r(0xf0, xix   .w0) r(0xf2, xix   .w1) r(0xf4, xiy   .w0) r(0xf6, xiy   .w1)
  r(0xf8, xiz   .w0) r(0xfa, xiz   .w1) r(0xfc, xsp   .w0) r(0xfe, xsp   .w1)
  #undef r
  }
  return nothing;
}

template<> auto TLCS900H::map(Register<n32> register) const -> maybe<n32&> {
  switch(register.id & ~3) {
  #define r(id, name) case id: return r.name;
  r(0x00, xwa[0].l0) r(0x04, xbc[0].l0) r(0x08, xde[0].l0) r(0x0c, xhl[0].l0)
  r(0x10, xwa[1].l0) r(0x14, xbc[1].l0) r(0x18, xde[1].l0) r(0x1c, xhl[1].l0)
  r(0x20, xwa[2].l0) r(0x24, xbc[2].l0) r(0x28, xde[2].l0) r(0x2c, xhl[2].l0)
  r(0x30, xwa[3].l0) r(0x34, xbc[3].l0) r(0x38, xde[3].l0) r(0x3c, xhl[3].l0)
  r(0xd0, xwa[p].l0) r(0xd4, xbc[p].l0) r(0xd8, xde[p].l0) r(0xdc, xhl[p].l0)
  r(0xe0, xwa[a].l0) r(0xe4, xbc[a].l0) r(0xe8, xde[a].l0) r(0xec, xhl[a].l0)
  r(0xf0, xix   .l0) r(0xf4, xiy   .l0) r(0xf8, xiz   .l0) r(0xfc, xsp   .l0)
  #undef r
  }
  return nothing;
}

#undef a
#undef p

template<> auto TLCS900H::load<n8 >(Register<n8 > register) const -> n8  { return map(register)(Undefined); }
template<> auto TLCS900H::load<n16>(Register<n16> register) const -> n16 { return map(register)(Undefined); }
template<> auto TLCS900H::load<n32>(Register<n32> register) const -> n32 { return map(register)(Undefined); }

template<> auto TLCS900H::store<n8 >(Register<n8 > register, n32 data) -> void { if(auto r = map(register)) r() = data; }
template<> auto TLCS900H::store<n16>(Register<n16> register, n32 data) -> void { if(auto r = map(register)) r() = data; }
template<> auto TLCS900H::store<n32>(Register<n32> register, n32 data) -> void { if(auto r = map(register)) r() = data; }

auto TLCS900H::expand(Register<n8 > register) const -> Register<n16> { return {register.id & ~1}; }
auto TLCS900H::expand(Register<n16> register) const -> Register<n32> { return {register.id & ~3}; }
auto TLCS900H::expand(Register<n32> register) const -> Register<n32> { return {register.id & ~3}; }  //unused

auto TLCS900H::shrink(Register<n32> register) const -> Register<n16> { return {register.id}; }
auto TLCS900H::shrink(Register<n16> register) const -> Register<n8 > { return {register.id}; }
auto TLCS900H::shrink(Register<n8 > register) const -> Register<n8 > { return {register.id}; }  //unused

auto TLCS900H::load(FlagRegister f) const -> n8 {
  //TLCS-90: d3 = X   (expansion carry flag); TLCS-900/H: always 0
  //TLCS-90: d5 = IFF (interrupt flip-flop);  TLCS-900/H: always 0
  switch(f.id) {
  case 0: return CF << 0 | NF << 1 | VF << 2 | 0 << 3 | HF << 4 | 0 << 5 | ZF << 6 | SF << 7;
  case 1: return CA << 0 | NA << 1 | VA << 2 | 0 << 3 | HA << 4 | 0 << 5 | ZA << 6 | SA << 7;
  } unreachable;
}

auto TLCS900H::store(FlagRegister f, n8 data) -> void {
  switch(f.id) {
  case 0: CF = data.bit(0); NF = data.bit(1); VF = data.bit(2); HF = data.bit(4); ZF = data.bit(6); SF = data.bit(7); return;
  case 1: CA = data.bit(0); NA = data.bit(1); VA = data.bit(2); HA = data.bit(4); ZA = data.bit(6); SA = data.bit(7); return;
  } unreachable;
}

auto TLCS900H::load(StatusRegister) const -> n16 {
  //TLCS-900: d10 = RFP2; TLCS-900/H: always 0
  //TLCS-900: d11 = MAX;  TLCS-900/H: always 1
  //TLCS-900: d15 = SYSM; TLCS-900/H: always 1
  return load(F) | RFP << 8 | 0 << 10 | 1 << 11 | IFF << 12 | 1 << 15;
}

auto TLCS900H::store(StatusRegister, n16 data) -> void {
  store(F, data.bit(0,7));
  RFP = data.bit(8,9);
  IFF = data.bit(12,14);
}

auto TLCS900H::load(ProgramCounter) const -> n32 {
  return r.pc.l0;
}

auto TLCS900H::store(ProgramCounter, n32 data) -> void {
  r.pc.l0 = data;
  invalidate();
}

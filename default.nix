with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "tmk_keyboard";
  src = lib.cleanSource ./.;

  buildInputs = [ avrgcclibc ];

  buildPhase = ''
    cd keyboard/dactyl
    make -f Makefile.pjrc daniel
  '';
  installPhase = ''
    mkdir -p $out
    cp dactyl_pjrc.hex $out
  '';
}

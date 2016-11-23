with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "tmk_keyboard";
  src = ./.;

  buildInputs = [ avrgcclibc ];

  buildPhase = ''
    cd keyboard/dactyl
    make -f Makefile.pjrc daniel
  '';
  installPhase = ''
    mkdir -p $out
    cp $src/keyboard/dactyl/dactyl_pjrc.hex $out
  '';
}

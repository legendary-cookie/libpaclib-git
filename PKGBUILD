pkgname=libpaclib-git
pkgver=r3.00f2576
pkgrel=1
pkgdesc="Interface for pacman in C++"
arch=('x86_64')
url="https://github.com/legendary-cookie/libpaclib"
license=('GPL3')
depends=()
makedepends=('cmake>=3', 'git')
provides=("${pkgname%-git}")
conflicts=("${pkgname%-git}")
md5sums=('SKIP')
source=("libpaclib::git+https://github.com/legendary-cookie/$pkgname")

validpkgkeys=("7295 48F7 4489 D805 50FA  2867 D84F 69EF 7345 8323")

pkgver() {
	cd "$srcdir/${pkgname%-git}"
	printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
	cd "$srcdir/${pkgname%-git}"
	mkdir build
}

build() {
	cd "$srcdir/${pkgname%-git}"
	cd build
	cmake ..
	make
}


package() {
	cd "$srcdir/${pkgname%-git}"
	cd build
	make DESTDIR="$pkgdir/" install
}

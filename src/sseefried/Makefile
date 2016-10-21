top_builddir=../..

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES = -I$(top_builddir)/src -I$(top_builddir)/src/config
CPPFLAGS = -I/media/sf_sseefried/all-code/2016/zcash-projects/zcash/depends/x86_64-unknown-linux-gnu/share/../include/libsnark -I/media/sf_sseefried/all-code/2016/zcash-projects/zcash/depends/x86_64-unknown-linux-gnu/share/../include/  -DBOOST_SPIRIT_THREADSAFE -DHAVE_BUILD_INFO -D__STDC_FORMAT_MACROS  -U_FORTIFY_SOURCE -D_FORTIFY_SOURCE=2 -pthread
CXXFLAGS = -std=c++11 -pipe -O1 -fwrapv -fno-strict-aliasing -Werror -g  -Wformat -Wformat-security -Wstack-protector -fstack-protector-all -fPIE

CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)

LIBBITCOIN_SERVER   = libbitcoin_server.a
LIBBITCOIN_WALLET   = libbitcoin_wallet.a
LIBBITCOIN_COMMON   = libbitcoin_common.a
LIBBITCOIN_CLI      = libbitcoin_cli.a
LIBBITCOIN_UTIL     = libbitcoin_util.a
LIBBITCOIN_CRYPTO   = crypto/libbitcoin_crypto.a
LIBBITCOIN_UNIVALUE = univalue/libbitcoin_univalue.a
LIBBITCOINQT        = qt/libbitcoinqt.a
LIBSECP256K1        = secp256k1/libsecp256k1.la
LIBZCASH            = libzcash.a

BOOST_CHRONO_LIB = -lboost_chrono-mt
#BOOST_CPPFLAGS = -pthread -I/media/sf_sseefried/all-code/2016/zcash-projects/zcash/depends/x86_64-unknown-linux-gnu/share/../include
BOOST_FILESYSTEM_LIB = -lboost_filesystem-mt
# BOOST_LDFLAGS = -L/media/sf_sseefried/all-code/2016/zcash-projects/zcash/depends/x86_64-unknown-linux-gnu/share/../lib
BOOST_LIBS = -L/media/sf_sseefried/all-code/2016/zcash-projects/zcash/depends/x86_64-unknown-linux-gnu/share/../lib -lboost_system-mt -lboost_filesystem-mt -lboost_program_options-mt -lboost_thread-mt -lboost_chrono-mt
# BOOST_PROGRAM_OPTIONS_LIB = -lboost_program_options-mt
# BOOST_SYSTEM_LIB = -lboost_system-mt
# BOOST_THREAD_LIB = -lboost_thread-mt
# BOOST_UNIT_TEST_FRAMEWORK_LIB = -lboost_unit_test_framework-mt


BITCOIN_LIBS=-L.. -L../crypto -lbitcoin_server -lbitcoin_wallet -lbitcoin_common -lbitcoin_util -lbitcoin_crypto
LIBZCASH_LIBS = -lzcash -lsnark -lgmp -lgmpxx -lboost_system-mt -lcrypto -lsodium -fopenmp
SECP256K1_LIBS = -L../secp256k1/.libs -lsecp256k1
LIBS = $(BITCOIN_LIBS) $(BOOST_LIBS) $(LIBZCASH_LIBS) $(SECP256K1_LIBS) -lpthread


validate: validate.o
	$(CXX)  $< $(LIBS) -o $@

%.o: %.cpp
	$(CXXCOMPILE) -c $< -o $@
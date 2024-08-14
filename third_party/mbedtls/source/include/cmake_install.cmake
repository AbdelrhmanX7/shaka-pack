# Install script for directory: /home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mbedtls" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/aes.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/aria.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/asn1.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/asn1write.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/base64.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/bignum.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/build_info.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/camellia.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ccm.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/chacha20.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/chachapoly.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/check_config.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/cipher.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/cmac.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/compat-2.x.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/config_psa.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/constant_time.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ctr_drbg.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/debug.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/des.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/dhm.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ecdh.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ecdsa.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ecjpake.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ecp.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/entropy.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/error.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/gcm.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/hkdf.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/hmac_drbg.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/mbedtls_config.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/md.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/md5.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/memory_buffer_alloc.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/net_sockets.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/nist_kw.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/oid.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/pem.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/pk.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/pkcs12.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/pkcs5.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/platform.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/platform_time.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/platform_util.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/poly1305.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/private_access.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/psa_util.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ripemd160.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/rsa.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/sha1.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/sha256.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/sha512.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ssl.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ssl_cache.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ssl_ciphersuites.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ssl_cookie.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/ssl_ticket.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/threading.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/timing.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/version.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/x509.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/x509_crl.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/x509_crt.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/mbedtls/x509_csr.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/psa" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_builtin_composites.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_builtin_primitives.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_compat.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_config.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_driver_common.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_driver_contexts_composites.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_driver_contexts_primitives.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_extra.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_platform.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_se_driver.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_sizes.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_struct.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_types.h"
    "/home/abdelrhman/shaka-packager/packager/third_party/mbedtls/source/include/psa/crypto_values.h"
    )
endif()


/*
 * Copyright (c) 2021 Nordic Semiconductor
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 *
 */

#ifndef PSA_CRYPTO_CONFIG_H
#define PSA_CRYPTO_CONFIG_H


#define PSA_WANT_ALG_CTR_DRBG                              1
#define PSA_WANT_ALG_HMAC_DRBG                             1
/*
 * CBC-MAC is not yet supported via the PSA API in Mbed TLS.
 */
//#define PSA_WANT_ALG_CBC_MAC
#define PSA_WANT_ALG_CBC_NO_PADDING                        1
#define PSA_WANT_ALG_CBC_PKCS7                             1
#define PSA_WANT_ALG_CCM                                   1
#define PSA_WANT_ALG_CMAC                                  1
#define PSA_WANT_ALG_CFB                                   1
#define PSA_WANT_ALG_CHACHA20_POLY1305                     1
#define PSA_WANT_ALG_CMAC                                  1
#define PSA_WANT_ALG_CTR                                   1
#define PSA_WANT_ALG_DETERMINISTIC_ECDSA                   1
#define PSA_WANT_ALG_ECB_NO_PADDING                        1
#define PSA_WANT_ALG_ECDH                                  1
#define PSA_WANT_ALG_ECDSA                                 1
#define PSA_WANT_ALG_GCM                                   1
#define PSA_WANT_ALG_HKDF                                  1
#define PSA_WANT_ALG_HMAC                                  1
/* #undef PSA_WANT_ALG_MD5 */
#define PSA_WANT_ALG_OFB                                   1
/* PBKDF2-HMAC is not yet supported via the PSA API in Mbed TLS.
 * Note: when adding support, also adjust include/mbedtls/config_psa.h */
/* #undef PSA_WANT_ALG_PBKDF2_HMAC */
#define PSA_WANT_ALG_RIPEMD160                             1
/* #undef PSA_WANT_ALG_RSA_OAEP */
/* #undef PSA_WANT_ALG_RSA_PKCS1V15_CRYPT */
/* #undef PSA_WANT_ALG_RSA_PKCS1V15_SIGN */
/* #undef PSA_WANT_ALG_RSA_PSS */
#define PSA_WANT_ALG_SHA_1                                 1
#define PSA_WANT_ALG_SHA_224                               1
#define PSA_WANT_ALG_SHA_256                               1
#define PSA_WANT_ALG_SHA_384                               1
#define PSA_WANT_ALG_SHA_512                               1
#define PSA_WANT_ALG_STREAM_CIPHER                         1
/* #undef PSA_WANT_ALG_TLS12_PRF */
/* #undef PSA_WANT_ALG_TLS12_PSK_TO_MS */
/* #undef PSA_WANT_ALG_XTS */

/* #undef PSA_WANT_ECC_BRAINPOOL_P_R1_256 */
/* #undef PSA_WANT_ECC_BRAINPOOL_P_R1_384 */
/* #undef PSA_WANT_ECC_BRAINPOOL_P_R1_512 */
/* #undef PSA_WANT_ECC_MONTGOMERY_255 */
/* #undef PSA_WANT_ECC_MONTGOMERY_448 */
/* #undef PSA_WANT_ECC_SECP_K1_192 */
/*
 * SECP224K1 is buggy via the PSA API in Mbed TLS
 * (https://github.com/ARMmbed/mbedtls/issues/3541). Thus, do not enable it by
 * default.
 */
/* #undef PSA_WANT_ECC_SECP_K1_224 */
/* #undef PSA_WANT_ECC_SECP_K1_256 */
/* #undef PSA_WANT_ECC_SECP_R1_192 */
/* #undef PSA_WANT_ECC_SECP_R1_224 */
#define PSA_WANT_ECC_SECP_R1_256                           1
/* #undef PSA_WANT_ECC_SECP_R1_384 */
/* #undef PSA_WANT_ECC_SECP_R1_521 */

#define PSA_WANT_KEY_TYPE_DERIVE                           1
#define PSA_WANT_KEY_TYPE_HMAC                             1
#define PSA_WANT_KEY_TYPE_AES                              1
/* #undef PSA_WANT_KEY_TYPE_ARIA */
/* #undef PSA_WANT_KEY_TYPE_CAMELLIA */
#define PSA_WANT_KEY_TYPE_CHACHA20                         1
/* #undef PSA_WANT_KEY_TYPE_DES */
#define PSA_WANT_KEY_TYPE_ECC_KEY_PAIR                     1
#define PSA_WANT_KEY_TYPE_ECC_PUBLIC_KEY                   1
/* #undef PSA_WANT_KEY_TYPE_RAW_DATA */
/* #undef PSA_WANT_KEY_TYPE_RSA_KEY_PAIR */
/* #undef PSA_WANT_KEY_TYPE_RSA_PUBLIC_KEY */

/*
 * Accelerated key types
 */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_SUPPORT */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_ECC_KEY_PAIR */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_ECC_PUBLIC_KEY */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_RSA_KEY_PAIR */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_RSA_PUBLIC_KEY */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_AES */
/* #undef MBEDTLS_PSA_ACCEL_KEY_TYPE_CHACHA20 */

/*
 * PSA builtin configurations
 */
#define MBEDTLS_PSA_BUILTIN_HAS_KEY_TYPE                   1
#define MBEDTLS_PSA_BUILTIN_HAS_CIPHER_SUPPORT             1
#define MBEDTLS_PSA_BUILTIN_HAS_AEAD_SUPPORT               1
#define MBEDTLS_PSA_BUILTIN_HAS_MAC_SUPPORT                1
#define MBEDTLS_PSA_BUILTIN_HAS_HASH_SUPPORT               1
/* #undef MBEDTLS_PSA_BUILTIN_HAS_KEY_DERIVATION_SUPPORT */
/* #undef MBEDTLS_PSA_BUILTIN_HAS_ASYM_ENCRYPT_SUPPORT */
#define MBEDTLS_PSA_BUILTIN_HAS_ASYM_SIGN_SUPPORT          1
#define MBEDTLS_PSA_BUILTIN_HAS_ECC_SUPPORT                1
/* #undef MBEDTLS_PSA_BUILTIN_HAS_RSA_SUPPORT */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_CBC_MAC */
#define MBEDTLS_PSA_BUILTIN_ALG_CBC_NO_PADDING             1
#define MBEDTLS_PSA_BUILTIN_ALG_CBC_PKCS7                  1
#define MBEDTLS_PSA_BUILTIN_ALG_CCM                        1
#define MBEDTLS_PSA_BUILTIN_ALG_CFB                        1
#define MBEDTLS_PSA_BUILTIN_ALG_OFB                        1
#define MBEDTLS_PSA_BUILTIN_ALG_CHACHA20_POLY1305          1
#define MBEDTLS_PSA_BUILTIN_ALG_CMAC                       1
#define MBEDTLS_PSA_BUILTIN_ALG_CTR                        1
#define MBEDTLS_PSA_BUILTIN_ALG_DETERMINISTIC_ECDSA        1
#define MBEDTLS_PSA_BUILTIN_ALG_ECB_NO_PADDING             1
#define MBEDTLS_PSA_BUILTIN_ALG_ECDH                       1
#define MBEDTLS_PSA_BUILTIN_ALG_ECDSA                      1
#define MBEDTLS_PSA_BUILTIN_ALG_GCM                        1
#define MBEDTLS_PSA_BUILTIN_ALG_HKDF                       1
#define MBEDTLS_PSA_BUILTIN_ALG_HMAC                       1
/* #undef MBEDTLS_PSA_BUILTIN_ALG_MD5 */
#define MBEDTLS_PSA_BUILTIN_ALG_OFB                        1
/* #undef MBEDTLS_PSA_BUILTIN_ALG_PBKDF2_HMAC */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_RIPEMD160 */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_RSA_OAEP */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_RSA_PKCS1V15_CRYPT */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_RSA_PKCS1V15_SIGN */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_RSA_PSS */
#define MBEDTLS_PSA_BUILTIN_KEY_TYPE_ECC_KEY_PAIR          1
#define MBEDTLS_PSA_BUILTIN_KEY_TYPE_ECC_PUBLIC_KEY        1
/* #undef MBEDTLS_PSA_BUILTIN_KEY_TYPE_RSA_KEY_PAIR */
/* #undef MBEDTLS_PSA_BUILTIN_KEY_TYPE_RSA_PUBLIC_KEY */

#define MBEDTLS_PSA_BUILTIN_ALG_SHA_1                      1
#define MBEDTLS_PSA_BUILTIN_ALG_SHA_224                    1
#define MBEDTLS_PSA_BUILTIN_ALG_SHA_256                    1
#define MBEDTLS_PSA_BUILTIN_ALG_SHA_384                    1
#define MBEDTLS_PSA_BUILTIN_ALG_SHA_512                    1
/* #undef MBEDTLS_PSA_BUILTIN_ALG_TLS12_PRF */
/* #undef MBEDTLS_PSA_BUILTIN_ALG_TLS12_PSK_TO_MS */

#define MBEDTLS_PSA_BUILTIN_ALG_STREAM_CIPHER              1

/* #undef MBEDTLS_PSA_BUILTIN_ECC_BRAINPOOL_P_R1_256 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_BRAINPOOL_P_R1_384 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_BRAINPOOL_P_R1_512 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_MONTGOMERY_255 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_MONTGOMERY_448 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_K1_192 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_K1_224 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_K1_256 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_192 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_224 */
#define MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_256                1
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_384 */
/* #undef MBEDTLS_PSA_BUILTIN_ECC_SECP_R1_521 */

/* #undef MBEDTLS_PSA_BUILTIN_ALG_XTS */

/*
 * PSA driver configurations
 */
/* #undef PSA_CRYPTO_ACCELERATOR_DRIVER_PRESENT */

/*
 * nrf_cc3xx driver configurations
 */
/* #undef PSA_CRYPTO_DRIVER_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_CIPHER_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_AEAD_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_MAC_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_HASH_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_ASYM_ENCRYPT_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_ASYM_SIGN_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_ECC_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_RSA_SUPPORT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_HAS_ACCEL_KEY_TYPES_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CBC_MAC_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CBC_NO_PADDING_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CBC_PKCS7_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CCM_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CMAC_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CFB_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CHACHA20_POLY1305_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CMAC_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_CTR_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_DETERMINISTIC_ECDSA_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECB_NO_PADDING_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECDH_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECDSA_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_GCM_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_HKDF_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_HMAC_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_MD5_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_PBKDF2_HMAC_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_RSA_OAEP_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_RSA_PKCS1V15_CRYPT_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_RSA_PKCS1V15_SIGN_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_1_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_224_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_256_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ALG_STREAM_CIPHER_CC3XX */

/* #undef PSA_CRYPTO_DRIVER_ECC_BRAINPOOL_P_R1_256_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_MONTGOMERY_255_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_K1_192_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_K1_224_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_K1_256_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_192_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_224_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_256_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_384_CC3XX */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_521_CC3XX */

/* #undef PSA_CRYPTO_DRIVER_ALG_XTS_CC3XX */

/*
 * nrf_oberon driver configurations
 */
/* #undef PSA_CRYPTO_DRIVER_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_CIPHER_SUPPORT_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_AEAD_SUPPORT_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_HASH_SUPPORT_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_ASYM_SIGN_SUPPORT_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_ECC_SUPPORT_OBERON */
/* #undef PSA_CRYPTO_DRIVER_HAS_ACCEL_KEY_TYPES_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CBC_NO_PADDING_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CBC_PKCS7_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CCM_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CMAC_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CHACHA20_POLY1305_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CMAC_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_CTR_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_DETERMINISTIC_ECDSA_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECB_NO_PADDING_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECDH_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_ECDSA_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_GCM_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_HKDF_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_HMAC_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_1_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_224_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_256_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_384_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_SHA_512_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ALG_STREAM_CIPHER_OBERON */

/* #undef PSA_CRYPTO_DRIVER_ECC_MONTGOMERY_255_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_224_OBERON */
/* #undef PSA_CRYPTO_DRIVER_ECC_SECP_R1_256_OBERON */

/* Nordic specific */
/* #undef PSA_NATIVE_ITS */
/* #undef PSA_EITS_BACKEND_ZEPHYR */
/* #undef PSA_CRYPTO_SECURE */

/* PSA and drivers */
#define MBEDTLS_PSA_CRYPTO_C                               1
#define MBEDTLS_USE_PSA_CRYPTO                             1
/* #undef MBEDTLS_PSA_CRYPTO_STORAGE_C */
#define MBEDTLS_PSA_CRYPTO_DRIVERS                         1
#define MBEDTLS_PSA_CRYPTO_CLIENT                          1
/* #undef MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG */

/* TF-M */
/* #undef MBEDTLS_PSA_CRYPTO_SPM */
/* #undef MBEDTLS_PSA_CRYPTO_KEY_ID_ENCODES_OWNER */

/* Platform */
#define MBEDTLS_PLATFORM_C                                 1
#define MBEDTLS_PLATFORM_MEMORY                            1
#define MBEDTLS_NO_PLATFORM_ENTROPY                        1
#define MBEDTLS_MEMORY_BUFFER_ALLOC_C                      1

/* Platform configurations for _ALT defines */
/* #undef MBEDTLS_PLATFORM_EXIT_ALT */
/* #undef MBEDTLS_PLATFORM_FPRINTF_ALT */
/* #undef MBEDTLS_PLATFORM_PRINTF_ALT */
/* #undef MBEDTLS_PLATFORM_SNPRINTF_ALT */
/* #undef MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT */
#define MBEDTLS_ENTROPY_HARDWARE_ALT                       1
/* #undef MBEDTLS_THREADING_C */
/* #undef MBEDTLS_THREADING_ALT */
/* #undef MBEDTLS_PLATFORM_ZEROIZE_ALT */

/* Legacy configurations for _ALT defines */
/* #undef MBEDTLS_AES_SETKEY_ENC_ALT */
/* #undef MBEDTLS_AES_SETKEY_DEC_ALT */
/* #undef MBEDTLS_AES_ENCRYPT_ALT */
/* #undef MBEDTLS_AES_DECRYPT_ALT */
/* #undef MBEDTLS_AES_ALT */
/* #undef MBEDTLS_CMAC_ALT */
/* #undef MBEDTLS_CCM_ALT */
/* #undef MBEDTLS_GCM_ALT */
/* #undef MBEDTLS_CHACHA20_ALT */
/* #undef MBEDTLS_POLY1305_ALT */
/* #undef MBEDTLS_CHACHAPOLY_ALT */
/* #undef MBEDTLS_DHM_ALT */
/* #undef MBEDTLS_ECP_ALT */
/* #undef MBEDTLS_ECDH_GEN_PUBLIC_ALT */
/* #undef MBEDTLS_ECDH_COMPUTE_SHARED_ALT */
/* #undef MBEDTLS_ECDSA_GENKEY_ALT */
/* #undef MBEDTLS_ECDSA_SIGN_ALT */
/* #undef MBEDTLS_ECDSA_VERIFY_ALT */
/* #undef MBEDTLS_ECJPAKE_ALT */
/* #undef MBEDTLS_RSA_ALT */
/* #undef MBEDTLS_SHA1_ALT */
/* #undef MBEDTLS_SHA224_ALT */
/* #undef MBEDTLS_SHA256_ALT */
/* #undef MBEDTLS_SHA384_ALT */
/* #undef MBEDTLS_SHA512_ALT */

/* Legacy configuration for RNG */
#define MBEDTLS_ENTROPY_FORCE_SHA256                       1
#define MBEDTLS_ENTROPY_MAX_SOURCES                        1
#define MBEDTLS_NO_PLATFORM_ENTROPY                        1

/* Legacy configurations for mbed TLS APIs */
#define MBEDTLS_CIPHER_C                                   1
//#define MBEDTLS_PK_C                                       
//#define MBEDTLS_PK_WRITE_C                                 
//#define MBEDTLS_MD_C                                       1

/* Max curve bits for PSA APIs */
/* #undef PSA_VENDOR_ECC_MAX_CURVE_BITS */


/* TLS/DTLS configurations */
/* #undef MBEDTLS_SSL_ALL_ALERT_MESSAGES */
/* #undef MBEDTLS_SSL_DTLS_CONNECTION_ID */
/* #undef MBEDTLS_SSL_CONTEXT_SERIALIZATION */
/* #undef MBEDTLS_SSL_DEBUG_ALL */
/* #undef MBEDTLS_SSL_ENCRYPT_THEN_MAC */
/* #undef MBEDTLS_SSL_EXTENDED_MASTER_SECRET */
/* #undef MBEDTLS_SSL_KEEP_PEER_CERTIFICATE */
/* #undef MBEDTLS_SSL_RENEGOTIATION */
/* #undef MBEDTLS_SSL_MAX_FRAGMENT_LENGTH */
/* #undef MBEDTLS_SSL_PROTO_TLS1_2 */
/* #undef MBEDTLS_SSL_PROTO_DTLS */
/* #undef MBEDTLS_SSL_ALPN */
/* #undef MBEDTLS_SSL_DTLS_ANTI_REPLAY */
/* #undef MBEDTLS_SSL_DTLS_HELLO_VERIFY */
/* #undef MBEDTLS_SSL_DTLS_SRTP */
/* #undef MBEDTLS_SSL_DTLS_CLIENT_PORT_REUSE */
/* #undef MBEDTLS_SSL_SESSION_TICKETS */
/* #undef MBEDTLS_SSL_EXPORT_KEYS */
/* #undef MBEDTLS_SSL_SERVER_NAME_INDICATION */
/* #undef MBEDTLS_SSL_VARIABLE_BUFFER_LENGTH */
/* #undef MBEDTLS_SSL_CACHE_C */
/* #undef MBEDTLS_SSL_TICKET_C */
/* #undef MBEDTLS_SSL_CLI_C */
/* #undef MBEDTLS_SSL_SRV_C */
/* #undef MBEDTLS_SSL_TLS_C */
/* #undef MBEDTLS_SSL_IN_CONTENT_LEN */
/* #undef MBEDTLS_SSL_OUT_CONTENT_LEN */
/* #undef MBEDTLS_SSL_CIPHERSUITES */

/* #undef MBEDTLS_X509_RSASSA_PSS_SUPPORT */
/* #undef MBEDTLS_X509_USE_C */
/* #undef MBEDTLS_X509_CRT_PARSE_C */
/* #undef MBEDTLS_X509_CRL_PARSE_C */
/* #undef MBEDTLS_X509_CSR_PARSE_C */
/* #undef MBEDTLS_X509_CREATE_C */
/* #undef MBEDTLS_X509_CRT_WRITE_C */
/* #undef MBEDTLS_X509_CSR_WRITE_C */
/* #undef MBEDTLS_X509_REMOVE_INFO */

/* #undef MBEDTLS_KEY_EXCHANGE_PSK_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_DHE_PSK_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECDHE_PSK_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_RSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_RSA_PSK_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_DHE_RSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECDHE_RSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECDH_RSA_ENABLED */
/* #undef MBEDTLS_KEY_EXCHANGE_ECJPAKE_ENABLED */

/* Controlling some MPI sizes */
#define MBEDTLS_MPI_WINDOW_SIZE       6 /**< Maximum window size used. */
#define MBEDTLS_MPI_MAX_SIZE          256 /**< Maximum number of bytes for usable MPIs. */

#endif /* PSA_CRYPTO_CONFIG_H */

/*
 * Copyright (c) 2021 Nordic Semiconductor
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 *
 */

#ifndef PSA_CRYPTO_CONFIG_H
#define PSA_CRYPTO_CONFIG_H

/* PSA Core implementation */
#define PSA_CORE_OBERON                                    1

/* #undef PSA_MAX_RSA_KEY_BITS */

/*
 * nrf_cc3xx_platform driver configurations
 */
/* #undef PSA_NEED_CC3XX_CTR_DRBG_DRIVER */
#define PSA_NEED_CC3XX_HMAC_DRBG_DRIVER                    1

/*
 * nrf_cc3xx driver configurations
 */
/* #undef PSA_NEED_CC3XX_AEAD_DRIVER */
/* #undef PSA_NEED_CC3XX_ASYMMETRIC_ENCRYPTION_DRIVER */
/* #undef PSA_NEED_CC3XX_CIPHER_DRIVER */
/* #undef PSA_NEED_CC3XX_KEY_AGREEMENT_DRIVER */
/* #undef PSA_NEED_CC3XX_HASH_DRIVER */
/* #undef PSA_NEED_CC3XX_KEY_MANAGEMENT_DRIVER */
/* #undef PSA_NEED_CC3XX_MAC_DRIVER */
/* #undef PSA_NEED_CC3XX_ASYMMETRIC_SIGNATURE_DRIVER */

/*
 * nrf_oberon driver configurations
 */
/* #undef PSA_NEED_OBERON_AEAD_DRIVER */
/* #undef PSA_NEED_OBERON_ANY_RSA_KEY_SIZE */
/* #undef PSA_NEED_OBERON_ASYMMETRIC_ENCRYPTION_DRIVER */
/* #undef PSA_NEED_OBERON_ASYMMETRIC_SIGNATURE_DRIVER */
/* #undef PSA_NEED_OBERON_CBC_NO_PADDING_AES */
/* #undef PSA_NEED_OBERON_CBC_PKCS7_AES */
/* #undef PSA_NEED_OBERON_CCM_AES */
/* #undef PSA_NEED_OBERON_CCM_STAR_NO_TAG_AES */
/* #undef PSA_NEED_OBERON_CHACHA20_POLY1305 */
/* #undef PSA_NEED_OBERON_CIPHER_DRIVER */
/* #undef PSA_NEED_OBERON_CMAC */
/* #undef PSA_NEED_OBERON_CTR_AES */
/* #undef PSA_NEED_OBERON_CTR_DRBG_DRIVER */
/* #undef PSA_NEED_OBERON_ECB_NO_PADDING_AES */
/* #undef PSA_NEED_OBERON_ECDH */
/* #undef PSA_NEED_OBERON_ECDH_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_ECDH_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_ECDH_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_ECDH_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_ECDH_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_ECDH_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_ECDSA_DETERMINISTIC */
/* #undef PSA_NEED_OBERON_ECDSA_RANDOMIZED */
/* #undef PSA_NEED_OBERON_ECDSA_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_ECDSA_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_ECDSA_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_ECDSA_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_ECDSA_SIGN */
/* #undef PSA_NEED_OBERON_ECDSA_VERIFY */
/* #undef PSA_NEED_OBERON_ECJPAKE_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_ED25519PH */
/* #undef PSA_NEED_OBERON_ED448PH */
/* #undef PSA_NEED_OBERON_GCM_AES */
/* #undef PSA_NEED_OBERON_HASH_DRIVER */
/* #undef PSA_NEED_OBERON_HKDF */
/* #undef PSA_NEED_OBERON_HKDF_EXPAND */
/* #undef PSA_NEED_OBERON_HKDF_EXTRACT */
/* #undef PSA_NEED_OBERON_HMAC */
/* #undef PSA_NEED_OBERON_HMAC_DRBG_DRIVER */
/* #undef PSA_NEED_OBERON_JPAKE */
/* #undef PSA_NEED_OBERON_KEY_AGREEMENT_DRIVER */
/* #undef PSA_NEED_OBERON_KEY_DERIVATION_DRIVER */
/* #undef PSA_NEED_OBERON_KEY_MANAGEMENT_DRIVER */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_MONTGOMERY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_TWISTED_EDWARDS */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_DERIVE_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_MONTGOMERY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_TWISTED_EDWARDS */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_EXPORT_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_MONTGOMERY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_TWISTED_EDWARDS */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_GENERATE_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_MONTGOMERY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_TWISTED_EDWARDS */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_KEY_PAIR_IMPORT_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_MONTGOMERY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_MONTGOMERY_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_MONTGOMERY_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_SECP_R1_224 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_SECP_R1_384 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_SECP_R1_521 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_TWISTED_EDWARDS */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_ECC_PUBLIC_KEY_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_RSA_KEY_PAIR_EXPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_RSA_KEY_PAIR_IMPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_RSA_PUBLIC_KEY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_DERIVE */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_DERIVE_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_DERIVE_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_EXPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_EXPORT_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_EXPORT_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_IMPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_IMPORT_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_KEY_PAIR_IMPORT_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_PUBLIC_KEY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_PUBLIC_KEY_SECP */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SPAKE2P_PUBLIC_KEY_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_KEY_PAIR_EXPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_KEY_PAIR_EXPORT_3072 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_KEY_PAIR_IMPORT */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_KEY_PAIR_IMPORT_3072 */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_PUBLIC_KEY */
/* #undef PSA_NEED_OBERON_KEY_TYPE_SRP_6_PUBLIC_KEY_3072 */
/* #undef PSA_NEED_OBERON_MAC_DRIVER */
/* #undef PSA_NEED_OBERON_PAKE_DRIVER */
/* #undef PSA_NEED_OBERON_PBKDF2_AES_CMAC_PRF_128 */
/* #undef PSA_NEED_OBERON_PBKDF2_HMAC */
/* #undef PSA_NEED_OBERON_PURE_EDDSA_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_OBERON_PURE_EDDSA_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_OBERON_RSA_ANY_CRYPT */
/* #undef PSA_NEED_OBERON_RSA_ANY_SIGN */
/* #undef PSA_NEED_OBERON_RSA_ANY_VERIFY */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_1024 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_1536 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_2048 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_3072 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_4096 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_6144 */
/* #undef PSA_NEED_OBERON_RSA_KEY_SIZE_8192 */
/* #undef PSA_NEED_OBERON_RSA_OAEP */
/* #undef PSA_NEED_OBERON_RSA_PKCS1V15_CRYPT */
/* #undef PSA_NEED_OBERON_RSA_PKCS1V15_SIGN */
/* #undef PSA_NEED_OBERON_RSA_PSS */
/* #undef PSA_NEED_OBERON_SHA3 */
/* #undef PSA_NEED_OBERON_SHA3_224 */
/* #undef PSA_NEED_OBERON_SHA3_256 */
/* #undef PSA_NEED_OBERON_SHA3_384 */
/* #undef PSA_NEED_OBERON_SHA3_512 */
/* #undef PSA_NEED_OBERON_SHAKE */
/* #undef PSA_NEED_OBERON_SHAKE256_512 */
/* #undef PSA_NEED_OBERON_SHA_1 */
/* #undef PSA_NEED_OBERON_SHA_224 */
/* #undef PSA_NEED_OBERON_SHA_256 */
/* #undef PSA_NEED_OBERON_SHA_384 */
/* #undef PSA_NEED_OBERON_SHA_512 */
/* #undef PSA_NEED_OBERON_SPAKE2P */
/* #undef PSA_NEED_OBERON_SPAKE2P_CMAC_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_SPAKE2P_HMAC_SECP_R1_256 */
/* #undef PSA_NEED_OBERON_SPAKE2P_MATTER */
/* #undef PSA_NEED_OBERON_SRP_6 */
/* #undef PSA_NEED_OBERON_SRP_6_3072 */
/* #undef PSA_NEED_OBERON_SRP_PASSWORD_HASH */
/* #undef PSA_NEED_OBERON_STREAM_CIPHER_CHACHA20 */
/* #undef PSA_NEED_OBERON_TLS12_ECJPAKE_TO_PMS */
/* #undef PSA_NEED_OBERON_TLS12_PRF */
/* #undef PSA_NEED_OBERON_TLS12_PSK_TO_MS */

/* #undef PSA_NEED_NRF_RNG_ENTROPY_DRIVER */

/*
 * CRACEN driver configuration
 * NCSDK-20700: Make PSA CRACEN driver configurable.
 */
/* #undef PSA_CRYPTO_DRIVER_CRACEN */

/* #undef PSA_NEED_CRACEN_AEAD_DRIVER */
/* #undef PSA_NEED_CRACEN_CIPHER_DRIVER */
/* #undef PSA_NEED_CRACEN_KEY_AGREEMENT_DRIVER */
/* #undef PSA_NEED_CRACEN_ASYMMETRIC_SIGNATURE_DRIVER */
/* #undef PSA_NEED_CRACEN_ASYMMETRIC_ENCRYPTION_DRIVER */
/* #undef PSA_NEED_CRACEN_HASH_DRIVER */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_DRIVER */
/* #undef PSA_NEED_CRACEN_MAC_DRIVER */
/* #undef PSA_NEED_CRACEN_PAKE_DRIVER */
/* #undef PSA_NEED_CRACEN_KEY_DERIVATION_DRIVER */
/* #undef PSA_NEED_CRACEN_CTR_DRBG_DRIVER */

/* #undef PSA_NEED_CRACEN_CCM_AES */
/* #undef PSA_NEED_CRACEN_GCM_AES */
/* #undef PSA_NEED_CRACEN_CHACHA20_POLY1305 */
/* #undef PSA_NEED_CRACEN_CTR_AES */
/* #undef PSA_NEED_CRACEN_CBC_PKCS7_AES */
/* #undef PSA_NEED_CRACEN_CBC_NO_PADDING_AES */
/* #undef PSA_NEED_CRACEN_ECB_NO_PADDING_AES */
/* #undef PSA_NEED_CRACEN_OFB_AES */
/* #undef PSA_NEED_CRACEN_STREAM_CIPHER_CHACHA20 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_192 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_224 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_256 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_320 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_384 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1_512 */
/* #undef PSA_NEED_CRACEN_ECDH_BRAINPOOL_P_R1 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1_192 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1_224 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1_256 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1_384 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1_521 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_R1 */
/* #undef PSA_NEED_CRACEN_ECDH_MONTGOMERY_255 */
/* #undef PSA_NEED_CRACEN_ECDH_MONTGOMERY_448 */
/* #undef PSA_NEED_CRACEN_ECDH_MONTGOMERY */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_K1_192 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_K1_256 */
/* #undef PSA_NEED_CRACEN_ECDH_SECP_K1 */
/* #undef PSA_NEED_CRACEN_ASYMMETRIC_SIGNATURE_ANY_RSA */
/* #undef PSA_NEED_CRACEN_ASYMMETRIC_SIGNATURE_ANY_ECC */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_192 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_224 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_256 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_320 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_384 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1_512 */
/* #undef PSA_NEED_CRACEN_ECDSA_BRAINPOOL_P_R1 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1_192 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1_224 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1_256 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1_384 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1_521 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_R1 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_K1_192 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_K1_256 */
/* #undef PSA_NEED_CRACEN_ECDSA_SECP_K1 */
/* #undef PSA_NEED_CRACEN_PURE_EDDSA_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_CRACEN_PURE_EDDSA_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_CRACEN_PURE_EDDSA_TWISTED_EDWARDS */
/* #undef PSA_NEED_CRACEN_RSA_PKCS1V15_SIGN */
/* #undef PSA_NEED_CRACEN_RSA_PSS */
/* #undef PSA_NEED_CRACEN_RSA_OAEP */
/* #undef PSA_NEED_CRACEN_RSA_PKCS1V15_CRYPT */
/* #undef PSA_NEED_CRACEN_SHA_1 */
/* #undef PSA_NEED_CRACEN_SHA_224 */
/* #undef PSA_NEED_CRACEN_SHA_256 */
/* #undef PSA_NEED_CRACEN_SHA_384 */
/* #undef PSA_NEED_CRACEN_SHA_512 */
/* #undef PSA_NEED_CRACEN_SHA3_224 */
/* #undef PSA_NEED_CRACEN_SHA3_256 */
/* #undef PSA_NEED_CRACEN_SHA3_384 */
/* #undef PSA_NEED_CRACEN_SHA3_512 */
/* #undef PSA_NEED_CRACEN_RSA_KEY_SIZE_2048 */
/* #undef PSA_NEED_CRACEN_RSA_KEY_SIZE_3072 */
/* #undef PSA_NEED_CRACEN_RSA_KEY_SIZE_4096 */
/* #undef PSA_NEED_CRACEN_ANY_RSA_KEY_SIZE */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_192 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_224 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_256 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_320 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_384 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1_512 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_BRAINPOOL_P_R1 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1_192 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1_224 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1_256 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1_384 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1_521 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_R1 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_MONTGOMERY_255 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_MONTGOMERY_448 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_MONTGOMERY */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_TWISTED_EDWARDS_255 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_TWISTED_EDWARDS_448 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_TWISTED_EDWARDS */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_K1_192 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_K1_256 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_SECP_K1 */
/* #undef PSA_NEED_CRACEN_KEY_MANAGEMENT_ANY_ECC */
/* #undef PSA_NEED_CRACEN_HMAC */
/* #undef PSA_NEED_CRACEN_CMAC */
/* #undef PSA_NEED_CRACEN_SRP_6 */
/* #undef PSA_NEED_CRACEN_ECJPAKE_SECP_R1_256 */
/* #undef PSA_NEED_CRACEN_SPAKE2P */
/* #undef PSA_NEED_CRACEN_HKDF */
/* #undef PSA_NEED_CRACEN_SP800_108_COUNTER_CMAC */
/* #undef PSA_NEED_CRACEN_TLS12_ECJPAKE_TO_PMS */
/* #undef PSA_NEED_CRACEN_TLS12_PRF */
/* #undef PSA_NEED_CRACEN_TLS12_PSK_TO_MS */
/* #undef PSA_NEED_CRACEN_PBKDF2_HMAC */

/* Nordic specific */
/* #undef PSA_CRYPTO_DRIVER_ALG_PRNG_TEST */

/* PSA and drivers */
#define MBEDTLS_PSA_CRYPTO_C
/* #undef MBEDTLS_USE_PSA_CRYPTO */
/* #undef MBEDTLS_PSA_CRYPTO_STORAGE_C */
/* MBEDTLS_PSA_CRYPTO_DRIVERS is defined to 1 by TF-M's build system. */
#define MBEDTLS_PSA_CRYPTO_DRIVERS                         1
#define MBEDTLS_PSA_CRYPTO_CLIENT
#define MBEDTLS_PSA_CRYPTO_EXTERNAL_RNG
#define MBEDTLS_PSA_KEY_SLOT_COUNT                         32

/* TF-M */
#define MBEDTLS_PSA_CRYPTO_SPM
/* Avoid redefinition as TF-M defines this on the command line */
#ifndef MBEDTLS_PSA_CRYPTO_KEY_ID_ENCODES_OWNER
#define MBEDTLS_PSA_CRYPTO_KEY_ID_ENCODES_OWNER
#endif

/* Platform */
#define MBEDTLS_PLATFORM_C
#define MBEDTLS_PLATFORM_MEMORY
/* #undef MBEDTLS_NO_PLATFORM_ENTROPY */
#define MBEDTLS_MEMORY_BUFFER_ALLOC_C

/* Platform configurations for _ALT defines */
/* #undef MBEDTLS_PLATFORM_EXIT_ALT */
/* #undef MBEDTLS_PLATFORM_FPRINTF_ALT */
#define MBEDTLS_PLATFORM_PRINTF_ALT
/* #undef MBEDTLS_PLATFORM_SNPRINTF_ALT */
#define MBEDTLS_PLATFORM_SETUP_TEARDOWN_ALT
#define MBEDTLS_ENTROPY_HARDWARE_ALT
/* #undef MBEDTLS_THREADING_C */
/* #undef MBEDTLS_THREADING_ALT */

/* Legacy configurations for _ALT defines */
#define MBEDTLS_AES_SETKEY_ENC_ALT
#define MBEDTLS_AES_SETKEY_DEC_ALT
#define MBEDTLS_AES_ENCRYPT_ALT
#define MBEDTLS_AES_DECRYPT_ALT
#define MBEDTLS_AES_ALT
#define MBEDTLS_CMAC_ALT
#define MBEDTLS_CCM_ALT
#define MBEDTLS_GCM_ALT
#define MBEDTLS_CHACHA20_ALT
#define MBEDTLS_POLY1305_ALT
#define MBEDTLS_CHACHAPOLY_ALT
#define MBEDTLS_DHM_ALT
#define MBEDTLS_ECP_ALT
#define MBEDTLS_ECDH_GEN_PUBLIC_ALT
#define MBEDTLS_ECDH_COMPUTE_SHARED_ALT
#define MBEDTLS_ECDSA_GENKEY_ALT
#define MBEDTLS_ECDSA_SIGN_ALT
#define MBEDTLS_ECDSA_VERIFY_ALT
#define MBEDTLS_ECJPAKE_ALT
#define MBEDTLS_RSA_ALT
#define MBEDTLS_SHA1_ALT
#define MBEDTLS_SHA224_ALT
#define MBEDTLS_SHA256_ALT
/* #undef MBEDTLS_SHA384_ALT */
/* #undef MBEDTLS_SHA512_ALT */

/* Legacy configuration for RNG */
#define MBEDTLS_ENTROPY_FORCE_SHA256
#define MBEDTLS_ENTROPY_MAX_SOURCES                        1
/* #undef MBEDTLS_NO_PLATFORM_ENTROPY */

/* Legacy configurations for mbed TLS APIs */
#define MBEDTLS_CIPHER_C
//#define MBEDTLS_PK_C                                       
//#define MBEDTLS_PK_WRITE_C                                 
/* #undef MBEDTLS_MD_C */

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
/* #undef MBEDTLS_SSL_COOKIE_C */
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
/* #undef MBEDTLS_MPI_WINDOW_SIZE */
/* #undef MBEDTLS_MPI_MAX_SIZE */

#if CONFIG_MBEDTLS_CMAC_ALT
/* NCSDK-24838 */
#define MBEDTLS_CIPHER_MODE_CBC
#endif

#include <psa/core_unsupported_ciphers_check.h>

#include <check_crypto_config.h>

#endif /* PSA_CRYPTO_CONFIG_H */

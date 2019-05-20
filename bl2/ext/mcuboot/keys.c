/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Original code taken from mcuboot project at:
 * https://github.com/JuulLabs-OSS/mcuboot
 * Git SHA of the original version: 178be54bd6e5f035cc60e98205535682acd26e64
 * Modifications are Copyright (c) 2019 Arm Limited.
 */

#include <bootutil/sign_key.h>

#if defined(MCUBOOT_SIGN_RSA)
#if MCUBOOT_SIGN_RSA_LEN == 2048
#define HAVE_KEYS
const unsigned char rsa_pub_key[] = {
    0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01,
    0x00, 0xd1, 0x06, 0x08, 0x1a, 0x18, 0x44, 0x2c,
    0x18, 0xe8, 0xfb, 0xfd, 0xf7, 0x0d, 0xa3, 0x4f,
    0x1f, 0xbb, 0xee, 0x5e, 0xf9, 0xaa, 0xd2, 0x4b,
    0x18, 0xd3, 0x5a, 0xe9, 0x6d, 0x18, 0x80, 0x19,
    0xf9, 0xf0, 0x9c, 0x34, 0x1b, 0xcb, 0xf3, 0xbc,
    0x74, 0xdb, 0x42, 0xe7, 0x8c, 0x7f, 0x10, 0x53,
    0x7e, 0x43, 0x5e, 0x0d, 0x57, 0x2c, 0x44, 0xd1,
    0x67, 0x08, 0x0f, 0x0d, 0xbb, 0x5c, 0xee, 0xec,
    0xb3, 0x99, 0xdf, 0xe0, 0x4d, 0x84, 0x0b, 0xaa,
    0x77, 0x41, 0x60, 0xed, 0x15, 0x28, 0x49, 0xa7,
    0x01, 0xb4, 0x3c, 0x10, 0xe6, 0x69, 0x8c, 0x2f,
    0x5f, 0xac, 0x41, 0x4d, 0x9e, 0x5c, 0x14, 0xdf,
    0xf2, 0xf8, 0xcf, 0x3d, 0x1e, 0x6f, 0xe7, 0x5b,
    0xba, 0xb4, 0xa9, 0xc8, 0x88, 0x7e, 0x47, 0x3c,
    0x94, 0xc3, 0x77, 0x67, 0x54, 0x4b, 0xaa, 0x8d,
    0x38, 0x35, 0xca, 0x62, 0x61, 0x7e, 0xb7, 0xe1,
    0x15, 0xdb, 0x77, 0x73, 0xd4, 0xbe, 0x7b, 0x72,
    0x21, 0x89, 0x69, 0x24, 0xfb, 0xf8, 0x65, 0x6e,
    0x64, 0x3e, 0xc8, 0x0e, 0xd7, 0x85, 0xd5, 0x5c,
    0x4a, 0xe4, 0x53, 0x0d, 0x2f, 0xff, 0xb7, 0xfd,
    0xf3, 0x13, 0x39, 0x83, 0x3f, 0xa3, 0xae, 0xd2,
    0x0f, 0xa7, 0x6a, 0x9d, 0xf9, 0xfe, 0xb8, 0xce,
    0xfa, 0x2a, 0xbe, 0xaf, 0xb8, 0xe0, 0xfa, 0x82,
    0x37, 0x54, 0xf4, 0x3e, 0xe1, 0x2b, 0xd0, 0xd3,
    0x08, 0x58, 0x18, 0xf6, 0x5e, 0x4c, 0xc8, 0x88,
    0x81, 0x31, 0xad, 0x5f, 0xb0, 0x82, 0x17, 0xf2,
    0x8a, 0x69, 0x27, 0x23, 0xf3, 0xab, 0x87, 0x3e,
    0x93, 0x1a, 0x1d, 0xfe, 0xe8, 0xf8, 0x1a, 0x24,
    0x66, 0x59, 0xf8, 0x1c, 0xab, 0xdc, 0xce, 0x68,
    0x1b, 0x66, 0x64, 0x35, 0xec, 0xfa, 0x0d, 0x11,
    0x9d, 0xaf, 0x5c, 0x3a, 0xa7, 0xd1, 0x67, 0xc6,
    0x47, 0xef, 0xb1, 0x4b, 0x2c, 0x62, 0xe1, 0xd1,
    0xc9, 0x02, 0x03, 0x01, 0x00, 0x01,
};
const unsigned int rsa_pub_key_len = 270;
#elif MCUBOOT_SIGN_RSA_LEN == 3072
#define HAVE_KEYS
const unsigned char rsa_pub_key[] = {
    0x30, 0x82, 0x01, 0x8a, 0x02, 0x82, 0x01, 0x81,
    0x00, 0x9c, 0xba, 0xc2, 0x5a, 0xbf, 0xcc, 0xc5,
    0x4f, 0x20, 0x0c, 0x4f, 0x6f, 0x6c, 0x51, 0x4f,
    0x5c, 0x0a, 0xab, 0x80, 0xb8, 0x6b, 0x10, 0xc4,
    0x9b, 0x2b, 0xc4, 0x52, 0x32, 0x09, 0x4b, 0x3b,
    0x27, 0x94, 0x6a, 0x1d, 0xd5, 0x4c, 0xa8, 0x5c,
    0xa0, 0xc0, 0x76, 0x95, 0x7b, 0x26, 0x04, 0xb1,
    0x13, 0x7e, 0x78, 0x27, 0xd6, 0x0c, 0xb4, 0xe8,
    0xb0, 0x2d, 0x92, 0x52, 0x8a, 0xfb, 0x69, 0xff,
    0x42, 0x10, 0xaa, 0x56, 0x0c, 0x83, 0xc8, 0x65,
    0x6e, 0xba, 0x0d, 0x5f, 0x8e, 0xf7, 0x2b, 0x29,
    0x92, 0xfc, 0x42, 0x2d, 0x2d, 0xf9, 0x80, 0xf5,
    0x85, 0x21, 0x87, 0xea, 0xac, 0x40, 0xa8, 0xcb,
    0xd0, 0xa8, 0x3b, 0xe2, 0xd2, 0xec, 0xf0, 0x14,
    0x48, 0x0e, 0xcf, 0x2b, 0x8a, 0x4b, 0xa4, 0xcd,
    0xa1, 0x05, 0x5b, 0x17, 0x66, 0x1d, 0xde, 0x6e,
    0x44, 0xfe, 0x46, 0xa3, 0x0d, 0xd0, 0x69, 0xbf,
    0x8c, 0xad, 0xa9, 0x16, 0x68, 0x51, 0xeb, 0x79,
    0x91, 0x20, 0xe6, 0x81, 0x03, 0x07, 0x89, 0x40,
    0x55, 0x4b, 0xeb, 0xcf, 0x67, 0xf8, 0x31, 0xc7,
    0x1c, 0x54, 0x4e, 0x52, 0x0b, 0x60, 0xe8, 0xa2,
    0x50, 0x07, 0xd1, 0xcf, 0xce, 0x12, 0x26, 0xcd,
    0x8e, 0x82, 0x8d, 0x4e, 0x64, 0xa9, 0xf7, 0xc7,
    0x21, 0x99, 0x25, 0x07, 0xdd, 0xc5, 0xd5, 0x5f,
    0xf4, 0x63, 0xfa, 0xcc, 0x2b, 0xda, 0x06, 0x5c,
    0x59, 0x67, 0xb0, 0x06, 0x35, 0xe9, 0xaa, 0x92,
    0x45, 0x35, 0xe5, 0xa0, 0x03, 0xff, 0x1c, 0x02,
    0xb5, 0xc7, 0x4e, 0x94, 0x4b, 0x6e, 0xad, 0x73,
    0x9d, 0xce, 0x6f, 0x09, 0xb3, 0xb1, 0x8f, 0x60,
    0x6c, 0xa2, 0xfa, 0xcd, 0x77, 0x0f, 0xcc, 0x27,
    0xe6, 0x36, 0x58, 0xb3, 0x52, 0xf7, 0x8f, 0xbe,
    0x49, 0x98, 0xb7, 0xe9, 0x60, 0xfd, 0x97, 0x57,
    0xcd, 0xea, 0xd3, 0x0b, 0xdf, 0xa2, 0x42, 0xf7,
    0x44, 0xd3, 0x87, 0xde, 0xe0, 0x10, 0x03, 0x94,
    0xda, 0xfc, 0xbc, 0xdd, 0xbe, 0x93, 0xb3, 0x4a,
    0x2b, 0x58, 0xdc, 0x96, 0x12, 0xf2, 0x6f, 0x23,
    0xba, 0x3b, 0x37, 0xfe, 0xfc, 0x18, 0x1f, 0x75,
    0x7d, 0x54, 0x01, 0x0e, 0xbe, 0x3d, 0x18, 0x13,
    0xb3, 0x28, 0xb9, 0x34, 0x2c, 0xd5, 0xfb, 0xc5,
    0x33, 0xbd, 0x87, 0xbd, 0x3b, 0xe4, 0x1d, 0xd7,
    0x02, 0x3d, 0x1c, 0x72, 0x65, 0x72, 0x43, 0x43,
    0x36, 0xa8, 0xfa, 0xe6, 0x73, 0x2d, 0xa4, 0x61,
    0xe8, 0x02, 0x9c, 0x3a, 0x56, 0x4d, 0x1c, 0xd1,
    0x76, 0x9c, 0x8c, 0xaa, 0x5f, 0x1b, 0xeb, 0x1c,
    0x4a, 0xf5, 0xb9, 0xb8, 0x6f, 0x41, 0x4b, 0x27,
    0x87, 0xde, 0xf6, 0x94, 0x1f, 0xdd, 0xe6, 0xf1,
    0xa9, 0xc2, 0x02, 0xc2, 0x4f, 0xa3, 0xfc, 0xa4,
    0x03, 0x5a, 0xd9, 0x6f, 0x78, 0xfd, 0x84, 0xf0,
    0xe5, 0xfd, 0x3d, 0xa5, 0x4d, 0x1b, 0xad, 0x5b,
    0x4b, 0x02, 0x03, 0x01, 0x00, 0x01,
};
const unsigned int rsa_pub_key_len = 398;
#endif
#else
#error "No public key available for given signing algorithm."
#endif

#if defined(HAVE_KEYS)
const struct bootutil_key bootutil_keys[] = {
    {
        .key = rsa_pub_key,
        .len = &rsa_pub_key_len,
    },
};
const int bootutil_key_cnt = 1;
#endif

#include <stdio.h>
#include <iostream>

#include "utilstrencodings.h"
#include "chainparams.h"
#include "chainparamsbase.h"
#include "pow.h"
#include "primitives/block.h"
#include "crypto/equihash.h"
#include "uint256.h"


using namespace std;


void printBytes(vector<unsigned char> bytes) {
  for (std::vector<unsigned char>::const_iterator i = bytes.begin(); i != bytes.end(); ++i)
    cout << *i;
  cout << endl;
}

int main(int argc, char **argv) {
  // if (argc < 2) {
  //   printf("Usage: validate <solution in hex>\n");
  //   exit(1);
  // }

  // vector<unsigned char> blockHeader = ParseHex(argv[1]);
  // vector<unsigned char> input = ParseHex(argv[2]);

  bool isValid;
  CBlockHeader blockHeader;
  SelectParams(CBaseChainParams::MAIN);
  CChainParams params = Params();

    // int32_t nVersion;
    // uint256 hashPrevBlock;
    // uint256 hashMerkleRoot;
    // uint256 hashReserved;
    // uint32_t nTime;
    // uint32_t nBits;
    // uint256 nNonce;
    // std::vector<unsigned char> nSolution;

  blockHeader.nVersion       = 4;
  blockHeader.hashPrevBlock  = uint256S("00399d89146b2dc4e2a9536c20896dd78cdda33e80a17069f79dcad7a8ce2919");
  blockHeader.hashMerkleRoot = uint256S("0eb761ab3b06e606595e7c5989c90e387a269ec2b7e13280a0bc555375692723");
  blockHeader.nTime          = 1475773094;
  blockHeader.nBits          = 0x1f693863;
  blockHeader.nNonce         = uint256S("00005c739f740647fc263b9021e429319e41717c8c4235550282911b21e60001");
  blockHeader.nSolution      = ParseHex("0031f76bf89d0cb70de7290bdcf71e376be1bb7c4b09db0198a2f59b63df05a1474a96e7e922095c1d05012a25f766efc59d7f6751c580b39e1897405f8c3f2e95a503f58d8bdad19ab35b4abc6acd54d79e433307825e30c9d1c3e8c57db7aea25cf9f7add0de0aca2de55a340ab0eb11f8e1f375a89d5e5605e7f39b850c003986e7ce1e10f810ec966267d0df77b07be7a75e5b6c92cf57babdb045e89267d8169bb966fe086f007a13107ee180e96f2000f2d8ff5cebf0943fafbd03caf648a16b13dfee0827f397dd1f4a8313550d150c41054e110fb5a9307880d94fd69c11ef95b519ca30e9c781c0193d0ad286ea0ce6d42ca2bc29ff8ff705a6bc4cef0d6f6889cf01096d5f6e41954db064151d66b3bab2c9180e6af3b1ee3d9ea03ccf8d9599ed07aec7befae1403572dcd0a560388d5cc98a0a52704a289d8c9f619923ad3474ef73660b7b34401b0cb100a569e4a3446dbee8c9a4bcf046bcf5398ef320460d326cfbf7a2c049f1f421835331d278d4ebf77f5a09687215f843c378b1629335161d7dfdca0a3400de36caa54091a4467d35f5184bc8df7e1251399577b4020155d930cb4269aedcb081820b3e65d8203d118929375e5950d47cb5b64633c0e25bd29d79e3edd5320fded173648dfd79476be818f047215310365d638d32ac31f020d7cf6baf2d968ddfc086c609809ffe1302c75858a40673a1ce0dc2aefb258121345dfecdb81b18ba54ca4b5605599df85e736653fabb16d8136a1f90a2fbaa9feefdf3adb74a4e5b910f8d3b7f914029e4ba5759531aed32ce431a71208015ed669a004902f99263091925c7cd661801d0760902e2213ea1020a3af0e51ed2252bbf97e74d72d71496e238bd843f1130bc5e0248906d589182f248211f49455750b1081c13efea2a5dca17b18b729d7cbe5504f9204c35570163a6615bdf9801f324a5482d30686d76570c043f4011424b4c93e0a6d0726774e860b39f96b27cedc207718a84550e3850993762541a159fe6141e127451127e58fd83eebeadacf76a786a6fd86f95885e09500bcd26a702a1f37f177ea132923e298098621c10b2177f0d0cc4099a8290bc92306ffb5278c8f375fcca0e719d48434a1d9f94344473bca839152f5d331d632025cb95ed8a4acd5a0aec3bdb6f075734b77c55480556ad357b5e401369ae914a21a17a38cd851dc4a51d3b0b2f2ee89c37c76555b28cea1a3eb706b9af9f44279db98959ea313c84c852b1ff17968e707ffb7d611b0b2ac7dabeef5ef899887378de8b7ba0fff2510607a1847d131e4afd7fb84e98cfa977ec221f85ae24a3668df3ab7989d52cc465092cc40d48872cb91f110b31a76d2db285c8b69752023ec96b0175398ad644b24c6f1920adbda212b7e7dd6e11e24060592ac102088f59465eebdf8ecc917b6d70b8c4d8574e34970220889ac9c46f6124ea918611a95e547f32c4b0650e5c4a922b8611e9489f8611e6394b5f82015cb8f113e90ba4ef8bc85878e1353471d5b486bb90960333026db359eb8566495f40e3ae174d0ca54bc13c3bff4be5edb9aa5f1b673ee2364aedf986d21275fa0d0e09cf90bf3df5527bc44f5744a1e3b51abea33b2ca63b1652dadd6bebe9ff8f677fa87c2a568e8518279d02474328824c71d925c4b06ea1e697182a8c0e9dd914dbbcf104cca8a1e66a45448b5a8b6a26aa95c32b08fdc4fe45ad2c67cdac635bf7e78536fb2fbf61990a4d4b340805664bd1aa43211bdba74dbb5bd0b0120a903738d4c8a3f6ff72b24f995dc140c7e78a813d13b7465d3c16585fccdb9152eecb980f16721b0531230666fa98a0c80b92e1c5b9905a736df3a378421f2a9dabc67caf85cfa44e644899b911f5fcb9741c63");
  isValid = CheckEquihashSolution(&blockHeader, params);
  printf("Block valid?: %d\n", isValid);


  return 0;
}
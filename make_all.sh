#!/bin/bash

if [ -d mamba ]; then
rm -r mamba
fi

make clean
make all

if [ ! -d mamba ]; then
mkdir mamba
fi

if [ -f mamba_3_55DEX.lz.bin ]; then
mv mamba_3_55DEX.lz.bin  mamba/mamba_355D.lz.bin
fi
if [ -f mamba_3_55.lz.bin ]; then
mv mamba_3_55.lz.bin  mamba/mamba_355C.lz.bin
fi
if [ -f mamba_4_21DEX.lz.bin ]; then
mv mamba_4_21DEX.lz.bin  mamba/mamba_421D.lz.bin
fi
if [ -f mamba_4_21.lz.bin ]; then
mv mamba_4_21.lz.bin  mamba/mamba_421C.lz.bin
fi
if [ -f mamba_4_30DEX.lz.bin ]; then
mv mamba_4_30DEX.lz.bin  mamba/mamba_430D.lz.bin
fi
if [ -f mamba_4_30.lz.bin ]; then
mv mamba_4_30.lz.bin  mamba/mamba_430C.lz.bin
fi
if [ -f mamba_4_31DEX.lz.bin ]; then
mv mamba_4_31DEX.lz.bin  mamba/mamba_431D.lz.bin
fi
if [ -f mamba_4_31.lz.bin ]; then
mv mamba_4_31.lz.bin  mamba/mamba_431C.lz.bin
fi
if [ -f mamba_4_40DEX.lz.bin ]; then
mv mamba_4_40DEX.lz.bin  mamba/mamba_440D.lz.bin
fi
if [ -f mamba_4_40.lz.bin ]; then
mv mamba_4_40.lz.bin  mamba/mamba_440C.lz.bin
fi
if [ -f mamba_4_41DEX.lz.bin ]; then
mv mamba_4_41DEX.lz.bin  mamba/mamba_441D.lz.bin
fi
if [ -f mamba_4_41.lz.bin ]; then
mv mamba_4_41.lz.bin  mamba/mamba_441C.lz.bin
fi
if [ -f mamba_4_46DEX.lz.bin ]; then
mv mamba_4_46DEX.lz.bin  mamba/mamba_446D.lz.bin
fi
if [ -f mamba_4_46.lz.bin ]; then
mv mamba_4_46.lz.bin  mamba/mamba_446C.lz.bin
fi
if [ -f mamba_4_50DEX.lz.bin ]; then
mv mamba_4_50DEX.lz.bin  mamba/mamba_450D.lz.bin
fi
if [ -f mamba_4_50.lz.bin ]; then
mv mamba_4_50.lz.bin  mamba/mamba_450C.lz.bin
fi
if [ -f mamba_4_53DEX.lz.bin ]; then
mv mamba_4_53DEX.lz.bin  mamba/mamba_453D.lz.bin
fi
if [ -f mamba_4_53.lz.bin ]; then
mv mamba_4_53.lz.bin  mamba/mamba_453C.lz.bin
fi
if [ -f mamba_4_55DEX.lz.bin ]; then
mv mamba_4_55DEX.lz.bin  mamba/mamba_455D.lz.bin
fi
if [ -f mamba_4_55.lz.bin ]; then
mv mamba_4_55.lz.bin  mamba/mamba_455C.lz.bin
fi
if [ -f mamba_4_60DEX.lz.bin ]; then
mv mamba_4_60DEX.lz.bin  mamba/mamba_460D.lz.bin
fi
if [ -f mamba_4_60.lz.bin ]; then
mv mamba_4_60.lz.bin  mamba/mamba_460C.lz.bin
fi
if [ -f mamba_4_65DEX.lz.bin ]; then
mv mamba_4_65DEX.lz.bin  mamba/mamba_465D.lz.bin
fi
if [ -f mamba_4_65.lz.bin ]; then
mv mamba_4_65.lz.bin  mamba/mamba_465C.lz.bin
fi
if [ -f mamba_4_66DEX.lz.bin ]; then
mv mamba_4_66DEX.lz.bin  mamba/mamba_466D.lz.bin
fi
if [ -f mamba_4_66.lz.bin ]; then
mv mamba_4_66.lz.bin  mamba/mamba_466C.lz.bin
fi
if [ -f mamba_4_70DEX.lz.bin ]; then
mv mamba_4_70DEX.lz.bin  mamba/mamba_470D.lz.bin
fi
if [ -f mamba_4_70.lz.bin ]; then
mv mamba_4_70.lz.bin  mamba/mamba_470C.lz.bin
fi
if [ -f mamba_4_75DEX.lz.bin ]; then
mv mamba_4_75DEX.lz.bin  mamba/mamba_475D.lz.bin
fi
if [ -f mamba_4_75.lz.bin ]; then
mv mamba_4_75.lz.bin  mamba/mamba_475C.lz.bin
fi
if [ -f mamba_4_76DEX.lz.bin ]; then
mv mamba_4_76DEX.lz.bin  mamba/mamba_476D.lz.bin
fi
if [ -f mamba_4_76.lz.bin ]; then
mv mamba_4_76.lz.bin  mamba/mamba_476C.lz.bin
fi
if [ -f mamba_4_78.lz.bin ]; then
mv mamba_4_78.lz.bin  mamba/mamba_478C.lz.bin
fi
if [ -f mamba_4_78DEX.lz.bin ]; then
mv mamba_4_78DEX.lz.bin  mamba/mamba_478D.lz.bin
fi
if [ -f mamba_4_78DEH.lz.bin ]; then
mv mamba_4_78DEH.lz.bin  mamba/mamba_478E.lz.bin
fi
if [ -f mamba_4_80.lz.bin ]; then
mv mamba_4_80.lz.bin  mamba/mamba_480C.lz.bin
fi
if [ -f mamba_4_80DEX.lz.bin ]; then
mv mamba_4_80DEX.lz.bin  mamba/mamba_480D.lz.bin
fi
if [ -f mamba_4_80DEH.lz.bin ]; then
mv mamba_4_80DEH.lz.bin  mamba/mamba_480E.lz.bin
fi
if [ ! -d mamba/bin ]; then
mkdir mamba/bin
fi

if [ -f mamba_3_55DEX.bin ]; then
mv mamba_3_55DEX.bin  mamba/bin/mamba_355D.bin
fi
if [ -f mamba_3_55.bin ]; then
mv mamba_3_55.bin  mamba/bin/mamba_355C.bin
fi
if [ -f mamba_4_21DEX.bin ]; then
mv mamba_4_21DEX.bin  mamba/bin/mamba_421D.bin
fi
if [ -f mamba_4_21.bin ]; then
mv mamba_4_21.bin  mamba/bin/mamba_421C.bin
fi
if [ -f mamba_4_30DEX.bin ]; then
mv mamba_4_30DEX.bin  mamba/bin/mamba_430D.bin
fi
if [ -f mamba_4_30.bin ]; then
mv mamba_4_30.bin  mamba/bin/mamba_430C.bin
fi
if [ -f mamba_4_31DEX.bin ]; then
mv mamba_4_31DEX.bin  mamba/bin/mamba_431D.bin
fi
if [ -f mamba_4_31.bin ]; then
mv mamba_4_31.bin  mamba/bin/mamba_431C.bin
fi
if [ -f mamba_4_40DEX.bin ]; then
mv mamba_4_40DEX.bin  mamba/bin/mamba_440D.bin
fi
if [ -f mamba_4_40.bin ]; then
mv mamba_4_40.bin  mamba/bin/mamba_440C.bin
fi
if [ -f mamba_4_41DEX.bin ]; then
mv mamba_4_41DEX.bin  mamba/bin/mamba_441D.bin
fi
if [ -f mamba_4_41.bin ]; then
mv mamba_4_41.bin  mamba/bin/mamba_441C.bin
fi
if [ -f mamba_4_46DEX.bin ]; then
mv mamba_4_46DEX.bin  mamba/bin/mamba_446D.bin
fi
if [ -f mamba_4_46.bin ]; then
mv mamba_4_46.bin  mamba/bin/mamba_446C.bin
fi
if [ -f mamba_4_50DEX.bin ]; then
mv mamba_4_50DEX.bin  mamba/bin/mamba_450D.bin
fi
if [ -f mamba_4_50.bin ]; then
mv mamba_4_50.bin  mamba/bin/mamba_450C.bin
fi
if [ -f mamba_4_53DEX.bin ]; then
mv mamba_4_53DEX.bin  mamba/bin/mamba_453D.bin
fi
if [ -f mamba_4_53.bin ]; then
mv mamba_4_53.bin  mamba/bin/mamba_453C.bin
fi
if [ -f mamba_4_55DEX.bin ]; then
mv mamba_4_55DEX.bin  mamba/bin/mamba_455D.bin
fi
if [ -f mamba_4_55.bin ]; then
mv mamba_4_55.bin  mamba/bin/mamba_455C.bin
fi
if [ -f mamba_4_60DEX.bin ]; then
mv mamba_4_60DEX.bin  mamba/bin/mamba_460D.bin
fi
if [ -f mamba_4_60.bin ]; then
mv mamba_4_60.bin  mamba/bin/mamba_460C.bin
fi
if [ -f mamba_4_65DEX.bin ]; then
mv mamba_4_65DEX.bin  mamba/bin/mamba_465D.bin
fi
if [ -f mamba_4_65.bin ]; then
mv mamba_4_65.bin  mamba/bin/mamba_465C.bin
fi
if [ -f mamba_4_66DEX.bin ]; then
mv mamba_4_66DEX.bin  mamba/bin/mamba_466D.bin
fi
if [ -f mamba_4_66.bin ]; then
mv mamba_4_66.bin  mamba/bin/mamba_466C.bin
fi
if [ -f mamba_4_70DEX.bin ]; then
mv mamba_4_70DEX.bin  mamba/bin/mamba_470D.bin
fi
if [ -f mamba_4_70.bin ]; then
mv mamba_4_70.bin  mamba/bin/mamba_470C.bin
fi
if [ -f mamba_4_75DEX.bin ]; then
mv mamba_4_75DEX.bin  mamba/bin/mamba_475D.bin
fi
if [ -f mamba_4_75.bin ]; then
mv mamba_4_75.bin  mamba/bin/mamba_475C.bin
fi
if [ -f mamba_4_76DEX.bin ]; then
mv mamba_4_76DEX.bin  mamba/bin/mamba_476D.bin
fi
if [ -f mamba_4_76.bin ]; then
mv mamba_4_76.bin  mamba/bin/mamba_476C.bin
fi
if [ -f mamba_4_78.bin ]; then
mv mamba_4_78.bin  mamba/bin/mamba_478C.bin
fi
if [ -f mamba_4_78DEX.bin ]; then
mv mamba_4_78DEX.bin  mamba/bin/mamba_478D.bin
fi
if [ -f mamba_4_78DEH.bin ]; then
mv mamba_4_78DEH.bin  mamba/bin/mamba_478E.bin
fi
if [ -f mamba_4_80.bin ]; then
mv mamba_4_80.bin  mamba/bin/mamba_480C.bin
fi
if [ -f mamba_4_80DEX.bin ]; then
mv mamba_4_80DEX.bin  mamba/bin/mamba_480D.bin
fi
if [ -f mamba_4_80DEH.bin ]; then
mv mamba_4_80DEH.bin  mamba/bin/mamba_480E.bin
fi
if [ -f mamba_4_81.bin ]; then
mv mamba_4_81.bin  mamba/bin/mamba_481C.bin
fi
if [ -f mamba_4_81DEX.bin ]; then
mv mamba_4_81DEX.bin  mamba/bin/mamba_481D.bin
fi
if [ -f mamba_4_82.bin ]; then
mv mamba_4_82.bin  mamba/bin/mamba_482C.bin
fi
if [ -f mamba_4_81DEX.bin ]; then
mv mamba_4_82DEX.bin  mamba/bin/mamba_482D.bin
fi

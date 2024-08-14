# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: media_info.proto
# Protobuf Python Version: 4.25.2
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x10media_info.proto\x12\x05shaka\"#\n\x05Range\x12\r\n\x05\x62\x65gin\x18\x01 \x01(\x04\x12\x0b\n\x03\x65nd\x18\x02 \x01(\x04\"\x8f\x15\n\tMediaInfo\x12\x11\n\tbandwidth\x18\x01 \x01(\r\x12.\n\nvideo_info\x18\x02 \x01(\x0b\x32\x1a.shaka.MediaInfo.VideoInfo\x12.\n\naudio_info\x18\x03 \x01(\x0b\x32\x1a.shaka.MediaInfo.AudioInfo\x12,\n\ttext_info\x18\x04 \x01(\x0b\x32\x19.shaka.MediaInfo.TextInfo\x12\x42\n\x13\x63ontent_protections\x18\x05 \x03(\x0b\x32%.shaka.MediaInfo.ContentProtectionXml\x12<\n\x11protected_content\x18\x0f \x01(\x0b\x32!.shaka.MediaInfo.ProtectedContent\x12\x1c\n\x14reference_time_scale\x18\r \x01(\r\x12 \n\x18presentation_time_offset\x18\x10 \x01(\x04\x12I\n\x0e\x63ontainer_type\x18\x0e \x01(\x0e\x32\x1e.shaka.MediaInfo.ContainerType:\x11\x43ONTAINER_UNKNOWN\x12 \n\ninit_range\x18\x06 \x01(\x0b\x32\x0c.shaka.Range\x12!\n\x0bindex_range\x18\x07 \x01(\x0b\x32\x0c.shaka.Range\x12\x17\n\x0fmedia_file_name\x18\x08 \x01(\t\x12\'\n\x11subsegment_ranges\x18\x17 \x03(\x0b\x32\x0c.shaka.Range\x12\x1e\n\x16media_duration_seconds\x18\t \x01(\x02\x12\x19\n\x11init_segment_name\x18\n \x01(\t\x12\x18\n\x10segment_template\x18\x0b \x01(\t\x12$\n\x18segment_duration_seconds\x18\x0c \x01(\x02\x42\x02\x18\x01\x12\x16\n\x0emedia_file_url\x18\x11 \x01(\t\x12\x18\n\x10init_segment_url\x18\x12 \x01(\t\x12\x1c\n\x14segment_template_url\x18\x13 \x01(\t\x12\x1b\n\x13hls_characteristics\x18\x14 \x03(\t\x12\x1c\n\x14\x64\x61sh_accessibilities\x18\x15 \x03(\t\x12\x12\n\ndash_roles\x18\x16 \x03(\t\x12 \n\x18\x61vailability_time_offset\x18\x18 \x01(\x01\x12\x18\n\x10segment_duration\x18\x19 \x01(\x04\x12\x1e\n\x0f\x66orced_subtitle\x18\x1a \x01(\x08:\x05\x66\x61lse\x12\r\n\x05index\x18\x1c \x01(\r\x12\x12\n\ndash_label\x18\x1d \x01(\t\x1a\xcd\x02\n\tVideoInfo\x12\r\n\x05\x63odec\x18\x01 \x01(\t\x12\r\n\x05width\x18\x02 \x01(\r\x12\x0e\n\x06height\x18\x03 \x01(\r\x12\x12\n\ntime_scale\x18\x04 \x01(\r\x12\x16\n\x0e\x66rame_duration\x18\x05 \x01(\x04\x12\x16\n\x0e\x64\x65\x63oder_config\x18\x06 \x01(\x0c\x12\x13\n\x0bpixel_width\x18\x07 \x01(\r\x12\x14\n\x0cpixel_height\x18\x08 \x01(\r\x12\x15\n\rplayback_rate\x18\t \x01(\r\x12 \n\x18transfer_characteristics\x18\n \x01(\r\x12\x17\n\x0f\x63olor_primaries\x18\x0b \x01(\r\x12\x1b\n\x13matrix_coefficients\x18\x0c \x01(\r\x12\x1a\n\x12supplemental_codec\x18\r \x01(\t\x12\x18\n\x10\x63ompatible_brand\x18\x0e \x01(\r\x1a\xd0\x01\n\tAudioInfo\x12\r\n\x05\x63odec\x18\x01 \x01(\t\x12\x1a\n\x12sampling_frequency\x18\x02 \x01(\r\x12\x12\n\ntime_scale\x18\x03 \x01(\r\x12\x14\n\x0cnum_channels\x18\x04 \x01(\r\x12\x10\n\x08language\x18\x05 \x01(\t\x12\x16\n\x0e\x64\x65\x63oder_config\x18\x06 \x01(\x0c\x12\x44\n\x13\x63odec_specific_data\x18\x07 \x01(\x0b\x32\'.shaka.MediaInfo.AudioCodecSpecificData\x1a\x92\x01\n\x16\x41udioCodecSpecificData\x12\x14\n\x0c\x63hannel_mask\x18\x01 \x01(\r\x12\x1a\n\x12\x63hannel_mpeg_value\x18\x02 \x01(\r\x12\x1a\n\x12\x65\x63\x33_joc_complexity\x18\x03 \x01(\r\x12\x14\n\x0c\x61\x63\x34_ims_flag\x18\x04 \x01(\x08\x12\x14\n\x0c\x61\x63\x34_cbi_flag\x18\x05 \x01(\x08\x1a\x91\x01\n\x08TextInfo\x12\r\n\x05\x63odec\x18\x01 \x01(\t\x12\x10\n\x08language\x18\x02 \x01(\t\x12\x30\n\x04type\x18\x03 \x01(\x0e\x32\".shaka.MediaInfo.TextInfo.TextType\"2\n\x08TextType\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x0b\n\x07\x43\x41PTION\x10\x01\x12\x0c\n\x08SUBTITLE\x10\x02\x1a\x93\x02\n\x10ProtectedContent\x12\x16\n\x0e\x64\x65\x66\x61ult_key_id\x18\x01 \x01(\x0c\x12Z\n\x18\x63ontent_protection_entry\x18\x02 \x03(\x0b\x32\x38.shaka.MediaInfo.ProtectedContent.ContentProtectionEntry\x12\x1f\n\x11protection_scheme\x18\x03 \x01(\t:\x04\x63\x65nc\x12\x1e\n\x10include_mspr_pro\x18\x04 \x01(\x08:\x04true\x1aJ\n\x16\x43ontentProtectionEntry\x12\x0c\n\x04uuid\x18\x01 \x01(\t\x12\x14\n\x0cname_version\x18\x02 \x01(\t\x12\x0c\n\x04pssh\x18\x03 \x01(\x0c\x1a\xb9\x03\n\x14\x43ontentProtectionXml\x12\x15\n\rscheme_id_uri\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\x12P\n\nattributes\x18\x03 \x03(\x0b\x32<.shaka.MediaInfo.ContentProtectionXml.AttributeNameValuePair\x12\x42\n\x0bsubelements\x18\x04 \x03(\x0b\x32-.shaka.MediaInfo.ContentProtectionXml.Element\x1a\x35\n\x16\x41ttributeNameValuePair\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\x1a\xad\x01\n\x07\x45lement\x12\x0c\n\x04name\x18\x01 \x01(\t\x12P\n\nattributes\x18\x02 \x03(\x0b\x32<.shaka.MediaInfo.ContentProtectionXml.AttributeNameValuePair\x12\x42\n\x0bsubelements\x18\x03 \x03(\x0b\x32-.shaka.MediaInfo.ContentProtectionXml.Element\"\x95\x01\n\rContainerType\x12\x15\n\x11\x43ONTAINER_UNKNOWN\x10\x00\x12\x11\n\rCONTAINER_MP4\x10\x01\x12\x16\n\x12\x43ONTAINER_MPEG2_TS\x10\x02\x12\x12\n\x0e\x43ONTAINER_WEBM\x10\x03\x12\x12\n\x0e\x43ONTAINER_TEXT\x10\x04\x12\x1a\n\x16\x43ONTAINER_PACKED_AUDIO\x10\x05')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'media_info_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_MEDIAINFO'].fields_by_name['segment_duration_seconds']._options = None
  _globals['_MEDIAINFO'].fields_by_name['segment_duration_seconds']._serialized_options = b'\030\001'
  _globals['_RANGE']._serialized_start=27
  _globals['_RANGE']._serialized_end=62
  _globals['_MEDIAINFO']._serialized_start=65
  _globals['_MEDIAINFO']._serialized_end=2768
  _globals['_MEDIAINFO_VIDEOINFO']._serialized_start=1053
  _globals['_MEDIAINFO_VIDEOINFO']._serialized_end=1386
  _globals['_MEDIAINFO_AUDIOINFO']._serialized_start=1389
  _globals['_MEDIAINFO_AUDIOINFO']._serialized_end=1597
  _globals['_MEDIAINFO_AUDIOCODECSPECIFICDATA']._serialized_start=1600
  _globals['_MEDIAINFO_AUDIOCODECSPECIFICDATA']._serialized_end=1746
  _globals['_MEDIAINFO_TEXTINFO']._serialized_start=1749
  _globals['_MEDIAINFO_TEXTINFO']._serialized_end=1894
  _globals['_MEDIAINFO_TEXTINFO_TEXTTYPE']._serialized_start=1844
  _globals['_MEDIAINFO_TEXTINFO_TEXTTYPE']._serialized_end=1894
  _globals['_MEDIAINFO_PROTECTEDCONTENT']._serialized_start=1897
  _globals['_MEDIAINFO_PROTECTEDCONTENT']._serialized_end=2172
  _globals['_MEDIAINFO_PROTECTEDCONTENT_CONTENTPROTECTIONENTRY']._serialized_start=2098
  _globals['_MEDIAINFO_PROTECTEDCONTENT_CONTENTPROTECTIONENTRY']._serialized_end=2172
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML']._serialized_start=2175
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML']._serialized_end=2616
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML_ATTRIBUTENAMEVALUEPAIR']._serialized_start=2387
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML_ATTRIBUTENAMEVALUEPAIR']._serialized_end=2440
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML_ELEMENT']._serialized_start=2443
  _globals['_MEDIAINFO_CONTENTPROTECTIONXML_ELEMENT']._serialized_end=2616
  _globals['_MEDIAINFO_CONTAINERTYPE']._serialized_start=2619
  _globals['_MEDIAINFO_CONTAINERTYPE']._serialized_end=2768
# @@protoc_insertion_point(module_scope)
function byte_num = byteNumType(format_type)

if ismember(format_type,['double','int64'])
    byte_num = 8;
elseif ismember(format_type,['float32','int32','long','float'])
    byte_num = 4;
elseif ismember(format_type,['float16','int16','short'])
    byte_num = 2;
elseif ismember(format_type,['char','int8'])
    byte_num = 1;
end
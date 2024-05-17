package com.code.files.database.homeContent.converters;

import androidx.room.TypeConverter;

import com.code.files.models.home_content.AllGenre;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;

import java.lang.reflect.Type;
import java.util.List;

public class GenreConverter {
    @TypeConverter
    public static String fromArrayList(List<AllGenre> list) {
        Gson gson = new Gson();
        return gson.toJson(list);
    }

    @TypeConverter
    public static List<AllGenre> jsonToList(String value) {
        Type listType = new TypeToken<List<AllGenre>>() {
        }.getType();
        Gson gson = new Gson();
        return gson.fromJson(value, listType);
    }
}
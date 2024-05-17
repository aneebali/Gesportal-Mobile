package com.code.files.database.config;

import android.app.Application;

import androidx.lifecycle.AndroidViewModel;

import com.code.files.network.model.config.Configuration;


public class ConfigViewModel extends AndroidViewModel {
    private ConfigRepository repository;
    private Configuration configuration;

    public ConfigViewModel(Application application) {
        super(application);
        repository = new ConfigRepository(application);
        configuration = repository.getConfigData();
    }

    public void insert(Configuration configuration) {
        repository.insert(configuration);
    }

    public void update(Configuration configuration) {
        repository.update(configuration);
    }

    public void deleteAll() {
        repository.deleteAll();
    }


    public Configuration getConfigData() {
        return configuration;
    }

}

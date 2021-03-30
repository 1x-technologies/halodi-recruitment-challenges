# ETL Weather Data

[Extract, transform, and load (ETL)](https://en.wikipedia.org/wiki/Extract,_transform,_load) is the basis of data science.
With decent ETL skills, engineers can be empowered making data-driven decisions and time-saving automation.

## Challenge

This challenge uses hourly historical weather data from the [Montreal McTavish weather station](https://climate.weather.gc.ca/climate_data/hourly_data_e.html?StationID=10761).
Given the CSVs in this folder, create a script, tool, or process that extracts the data, transforms/pivots it by calculating some basic statistics, and loads it into an output CSV with the following schema:

|month|temperature_mean|temperature_max|temperature_min|
|---|---|---|---|
|january| | | |
|february| | | |
|march| | | |

You can use any tool or programming language.
The resulting process should be scalable such that an arbitrary number of CSVs can be collected and processed (i.e., copying-pasting should not be part of the process).

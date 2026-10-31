# OncoCompute

**A C++ Scientific Computing Project for Cancer Drug Discovery**

## Overview

OncoCompute is a C++20 scientific computing project designed to develop reusable numerical algorithms and data-processing tools for cancer drug discovery research.

The project uses publicly available experimental data from the National Cancer Institute (NCI), particularly the NCI-60 Human Tumor Cell Line Screen.

## Technologies

- C++20
- CMake
- Microsoft Visual Studio Community
- Git and GitHub
- NCI-60 experimental screening data

## Current Features

- Arithmetic mean calculation using a reusable C++ function
- CSV file reading using the C++ Standard Library
- Integration of a small NCI-60 breast cancer screening dataset
- Organized header and source files
- CMake-based project configuration

## Research Dataset

**Source:** National Cancer Institute — Developmental Therapeutics Program

**Dataset:** NCI-60 Growth Inhibition Data (GI50)

**Initial compound:** NSC 713750

**Cancer panel:** Breast Cancer

The initial sample contains five cell line records. Reported measurements are retained on their original logarithmic scale. Their interpretation, including potential assay limits, will be validated before biological conclusions are drawn.

## Development Roadmap

- [x] Initialize C++20 project
- [x] Implement arithmetic mean
- [x] Read NCI-60 CSV data
- [x] Publish repository to GitHub
- [ ] Parse CSV data into structured C++ records
- [ ] Implement median and standard deviation
- [ ] Add scientific data validation
- [ ] Implement dose-response modeling
- [ ] Develop IC50 estimation functionality
- [ ] Add automated unit tests
- [ ] Create reusable C++ library targets
- [ ] Integrate with Python using pybind11

## Data Source

National Cancer Institute, Developmental Therapeutics Program.

[NCI-60 Growth Inhibition Data](https://wiki.nci.nih.gov/spaces/NCIDTPdata/pages/147193864/NCI-60%2BGrowth%2BInhibition%2BData)

## Project Status

**Active development.** OncoCompute is currently an educational and portfolio-oriented scientific computing project, not a clinically validated research or decision-support tool.
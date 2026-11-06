# OncoCompute

**A C++20 Scientific Computing Project for Cancer Drug Discovery**

## Overview

OncoCompute is a C++20 scientific computing project focused on developing reusable numerical algorithms, scientific data-processing tools, and analytical workflows for cancer drug discovery research.

The project uses publicly available experimental data from the National Cancer Institute (NCI), particularly the NCI-60 Human Tumor Cell Line Screen.

OncoCompute demonstrates how C++ software engineering can support biomedical research through data ingestion, structured parsing, validation, statistical analysis, and integration with visualization tools.

The long-term objective is to develop a reusable scientific computing library capable of supporting cancer drug-response analysis and future integration with Python-based research applications.

## Technologies

- **Programming Language:** C++20
- **Build System:** CMake
- **Development Environment:** Microsoft Visual Studio Community
- **Version Control:** Git and GitHub
- **Scientific Data:** NCI-60 experimental screening data
- **Data Processing:** C++ Standard Library, CSV parsing and validation
- **Data Visualization:** Tableau Public
- **Future Integration:** Python and pybind11

## Current Features

### Scientific Computing

- Arithmetic mean calculation using a reusable C++ function
- Modular organization of C++ header and source files
- Initial foundation for additional statistical algorithms

### Scientific Data Processing

- CSV file reading using the C++ Standard Library
- Parsing NCI-60 experimental data into structured C++ records
- Processing compound identifiers, cancer panels, cell lines, and reported experimental measurements
- Integration of a selected NCI-60 breast cancer screening dataset

### Data Validation

- Validation of structured NCI-60 experimental records
- Identification and counting of valid and invalid records
- Testing validation logic using deliberately invalid sample data
- Reporting validation results through the application console

### Data Export

- Export of validated experimental records to CSV
- Generation of structured datasets for downstream analysis
- Integration of exported datasets with Tableau Public

### Software Engineering

- CMake-based project configuration
- Modular source code organization
- Git-based version control
- Feature branch development
- GitHub repository hosting and pull-request workflow

## Research Dataset

**Source:** National Cancer Institute — Developmental Therapeutics Program

**Dataset:** NCI-60 Growth Inhibition Data (GI50)

**Initial Compound:** NSC 713750

**Cancer Panel:** Breast Cancer

**Cell Lines Analyzed:** 5

The initial dataset contains experimental measurements for the following breast cancer cell lines:

| Cell Line | Reported Log-Scale Measurement |
|---|---:|
| MCF7 | -5.1127 |
| BT-549 | -4.0000 |
| HS 578T | -4.0000 |
| T-47D | -5.3684 |
| MDA-MB-231/ATCC | -4.0000 |

Reported measurements are retained on their original logarithmic scale. Their interpretation, including potential assay limits, must be verified against the original NCI documentation before biological conclusions are drawn.

## NCI-60 Research Dashboard

OncoCompute includes an interactive Tableau Public dashboard demonstrating the processing and visualization of experimental cancer drug-response data.

**[View the Interactive OncoCompute Tableau Dashboard](https://public.tableau.com/app/profile/phillarica.monique.neal/viz/OncoComputeNCI-60CancerDrugResponseAnalysis/OncoComputeNCI-60CancerDrugResponseAnalysis)**

### Dashboard Features

- **Compound Identifier:** NSC 713750
- **Cancer Panel:** Breast Cancer
- **Cell Lines Analyzed:** 5
- **Experimental Comparison:** Reported log-scale measurements across five cancer cell lines
- **Research Methodology:** Documentation of the data source, processing workflow, and analytical limitations

The dashboard provides an interactive visual representation of the experimental records processed using OncoCompute.

### Scientific Software Workflow

1. **Data Acquisition:** Obtain publicly available NCI-60 experimental screening data.
2. **Data Ingestion:** Read experimental records from CSV files using C++.
3. **Structured Parsing:** Convert CSV records into structured C++ data objects.
4. **Data Validation:** Evaluate records against defined validation rules.
5. **Data Export:** Generate validated CSV datasets for downstream analysis.
6. **Visualization:** Explore experimental measurements using Tableau Public.

This workflow demonstrates the integration of scientific software development, data quality checks, and research visualization.

## Development Roadmap

### Phase 1 — Project Foundation

- [x] Initialize C++20 project
- [x] Configure CMake build system
- [x] Organize header and source files
- [x] Implement arithmetic mean
- [x] Publish repository to GitHub

### Phase 2 — NCI-60 Data Processing

- [x] Obtain NCI-60 experimental screening data
- [x] Read CSV data using C++
- [x] Parse CSV data into structured C++ records
- [x] Implement initial scientific data validation
- [x] Test validation using deliberately invalid records
- [x] Export validated experimental records to CSV

### Phase 3 — Data Visualization

- [x] Import validated CSV data into Tableau Public
- [x] Create cancer cell-line comparison visualization
- [x] Develop compound identifier KPI
- [x] Develop cell-line count KPI
- [x] Assemble research dashboard
- [x] Document research methodology
- [x] Publish interactive Tableau dashboard

### Phase 4 — Scientific Computing Expansion

- [ ] Implement median calculation
- [ ] Implement standard deviation
- [ ] Expand statistical data validation
- [ ] Implement dose-response modeling
- [ ] Develop IC50 estimation functionality
- [ ] Add automated unit tests
- [ ] Create reusable C++ library targets

### Phase 5 — Advanced Integration

- [ ] Integrate C++ library with Python using pybind11
- [ ] Expand support for additional NCI-60 compounds and cancer panels
- [ ] Develop additional scientific visualizations
- [ ] Explore performance optimization and benchmarking

## Data Source

National Cancer Institute, Developmental Therapeutics Program.

[NCI-60 Growth Inhibition Data](https://wiki.nci.nih.gov/spaces/NCIDTPdata/pages/147193864/NCI-60%2BGrowth%2BInhibition%2BData)

## Project Status

**Active Development**

OncoCompute is an educational and portfolio-oriented scientific computing project demonstrating the application of C++ software engineering to cancer research data.

Current functionality includes scientific data ingestion, structured CSV parsing, validation, data export, and interactive visualization.

Future development will focus on expanding the numerical computing library, implementing dose-response algorithms, adding automated testing, and integrating C++ with Python.

**Disclaimer:** OncoCompute is not a clinically validated research or medical decision-support tool. Experimental results are presented for educational purposes, software development, and exploratory analysis.
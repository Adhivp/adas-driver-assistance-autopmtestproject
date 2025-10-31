# adas-driver-assistance-autopmtestproject

## 🚗 Description
Advanced Driver Assistance Systems (ADAS) featuring adaptive cruise control and lane keeping

## ✨ Key Features
- Adaptive Cruise Control (ACC) with stop-and-go
- Lane Departure Warning and Lane Keep Assist
- Automatic Emergency Braking (AEB) system
- Blind Spot Detection and monitoring
- Traffic Sign Recognition (TSR) module

## 🛠️ Technology Stack
- AUTOSAR
- C/C++
- Python
- ROS2
- TensorFlow

## 📋 Prerequisites
- Automotive-grade development environment
- CAN/LIN bus simulation tools (Vector CANoe/CANalyzer recommended)
- ISO 26262 compliance documentation (for safety-critical modules)
- Hardware-in-the-loop (HIL) testing setup

## 🚀 Installation
```bash
git clone https://github.com/Adhivp/adas-driver-assistance-autopmtestproject.git
cd adas-driver-assistance-autopmtestproject

# Install dependencies
pip install -r requirements.txt  # For Python modules
# OR
./scripts/build.sh  # For embedded C/C++ projects
```

## 🔧 Configuration
Configure your vehicle parameters in `config/vehicle_params.yaml`:
```yaml
vehicle_type: sedan
can_bitrate: 500000
lin_baudrate: 19200
```

## 📖 Usage
Refer to `docs/USER_GUIDE.md` for detailed usage instructions.

## 🧪 Testing
```bash
# Run unit tests
pytest tests/

# Run HIL tests
./scripts/run_hil_tests.sh

# Generate coverage report
pytest --cov=src tests/
```

## 🏗️ Architecture
See `docs/ARCHITECTURE.md` for detailed software architecture and component diagrams.

## 🤝 Contributing
Pull requests are welcome! For major changes, please open an issue first.
Ensure all changes comply with ISO 26262 and AUTOSAR guidelines.

## 📄 License
MIT License - see LICENSE file for details

## ⚠️ Safety Notice
This software is intended for development and testing purposes. 
Ensure proper validation before deployment in production vehicles.

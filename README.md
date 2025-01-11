# Lightscape Plugin for OpenRGB

Lightscape is a 3D spatial LED control system plugin for OpenRGB that allows you to organize and control your RGB devices in a three-dimensional grid layout with advanced lighting effects.

## Project Background

This project was inspired by the Philips amBX Gaming peripheral system from 2006. The goal is to recreate and modernize the amBX concept using current RGB hardware and the OpenRGB framework. For reference, you can see the original amBX system here: [Philips amBX Gaming Peripherals](https://www.youtube.com/watch?v=TWC3ruGYif0)

## Development Note

This entire plugin was created using assistance from:
- [Claude AI](https://claude.ai)
- [ChatGPT](https://chat.openai.com)
- [DeepSeek](https://www.deepseek.com/)

As such:
- This is a very early alpha version
- There may be bugs and issues
- Some features might not work as expected
- Error handling might be incomplete

## Features

- 3D Grid Layout: Organize your RGB devices in a customizable 3-dimensional grid
- Multiple Layers: Support for up to 5 vertical layers
- Customizable Grid: Adjustable grid dimensions (up to 10x10 per layer)
- Custom Labels: Rename positions and layers for better organization
- Flexible Control: Assign whole devices, zones, or individual LEDs to grid positions
- Color Management: Easy color control for assigned devices
- Real-time Updates: See your changes instantly

### New Features
- Dynamic Effects System: Multiple built-in lighting effects
  - RadialFade: Lights fade based on distance from user
  - Wave: Rippling wave pattern from user position
  - Ripple: Expanding ring effect from user position
  - LayerCascade: Cascading effect across layers
- User Position System: Set your position in the grid for position-based effects
- Effect Controls: Adjust speed and intensity of effects
- Enhanced Real-time Updates: Smooth 60 FPS effect rendering

## Planned Features

Future development plans include:
- Game integration
- Screen capture and ambient lighting
- Enhanced 3D positioning system
- More customization options
- Additional spatial effects

## Installation

1. Download the plugin file (Lightscape.dll)
2. Place it in your OpenRGB plugins folder:
   - Windows: `%APPDATA%\OpenRGB\plugins`
   - Linux: `~/.config/OpenRGB\plugins`
   - MacOS: `~/Library/Application Support/OpenRGB/plugins`
3. Restart OpenRGB

## Build Instructions

### Prerequisites
- Qt 5.15 or newer
- OpenRGB source code
- C++ compiler with C++17 support

### Building
1. Clone or copy the plugin directory into OpenRGB's `plugins` folder
2. Open the project in Qt Creator
3. Configure the project with your Qt kit
4. Build the project

### Manual Build
```bash
cd OpenRGB/plugins/Lightscape
qmake
make
```

## Supporting Development

This project is developed using AI assistance, which involves subscription and API costs. If you find Lightscape useful and would like to support its continued development, you're welcome to contribute via:

<script type="text/javascript" src="https://cdnjs.buymeacoffee.com/1.0.0/button.prod.min.js" data-name="bmc-button" data-slug="Wolfieee" data-color="#40DCA5" data-emoji="🍕"  data-font="Poppins" data-text="Buy me a pizza" data-outline-color="#000000" data-font-color="#ffffff" data-coffee-color="#FFDD00" ></script>

Your support helps maintain the AI tools that make this development possible, but the plugin will always remain free and open source regardless.

## Open Source and Collaboration

Feel free to fork this repository and modify it however you like! This project is meant to be:
- An experiment in AI-assisted development
- A learning resource for others
- A foundation for community improvements
- Open to any and all modifications

If you're interested in the intersection of AI and development, this project serves as a real-world example of what's possible.

## Development Status

This plugin is in very early alpha stage. Expect bugs and incomplete features. Please report any issues or feature requests through GitHub issues, but understand that as this is an AI-assisted project, fixes and updates may take time as we experiment with the best ways to implement changes.

## Acknowledgments

- Built with assistance from Claude AI (Anthropic)
- Inspired by Philips amBX Gaming Peripherals
- Made possible by the OpenRGB framework

## License

This project is open-source software. Feel free to experiment, modify, and improve upon it!

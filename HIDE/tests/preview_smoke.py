"""Compatibility entry point for the unified app preview checks."""
import runpy
from pathlib import Path
runpy.run_path(str(Path(__file__).with_name('design_bridge_smoke.py')),run_name='__main__')

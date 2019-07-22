# Changelog
All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [2.1.0-preview.7] - 2019-06-11
### Added
- Fixed SpriteSkin assertion message when upgrading from 2.0

## [2.1.0-preview.6] - 2019-05-30
### Added
- Fixed Sprite not showing after it is being culled due to bone animation
- Update Entities package dependency version

## [2.1.0-preview.5] - 2019-05-13
### Added
- Fix several copy/paste issues related to flipping

## [2.1.0-preview.4] - 2019-04-29
### Added
- Fix skinning not in sync with the rendering.

## [2.1.0-preview.3] - 2019-04-24
### Added
- Set Burst compilation off for internal build

## [2.1.0-preview.2] - 2019-02-25
### Added
- Fix enable skinning on add SpriteSkin component
- Upgrade dependency package version for Unity 2019.1 support
- Fix case 1118093: SpriteSkin.onDrawGizmos() increases memory usage.

## [2.1.0-preview.1] - 2019-01-25
### Added
- Update package to work with 2019.1
- Improve animation runtime performance
- Fix bone reparenting sibling order
- Fix Sprite Visibility Tool in disabled state in certain cases
- Update documents

## [2.0.0-preview.1] - 2018-11-20
### Added
- Overhauled 2D Animation workflow.
- Refer to updated documentation for workflow changes. 
- Single Sprite Editor Window module for 2D Sprite Rigging workflow
- Unified Bone, Geometry and Weight tools in a single window
- Supports Multiple Sprite Single Character rigging workflow through 2D PSD Importer Package.
- SpriteSkin now uses user define bounds for renderer culling

## [1.0.16-preview.2] - 2018-11-14
### Added
- Fix 2 Issues:
1. Prefabs with SpriteSkin loses references to bone hierarchy when Library folder is rebuilt/different.
2. The scene viewport shows the character without any bones applied, needing an re-import. 

## [1.0.16-preview.1] - 2018-7-18
### Added
- Fix error log about VertexAttribute

## [1.0.16-preview] - 2018-6-20
### Added
- Fix Documentation warnings
- Fix error log complaining about DidReloadScripts signature.
- Fix issues with generate outline

## [1.0.15-preview] - 2018-4-12
### Added
- New Version suffix (preview)
- Improved Scene View gizmos for better manipulation of bone rotation and position
- Added notification when Sprites are imported with incorrect weights
- Fixed bug where textures with max texture size could not generate geometry

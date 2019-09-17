#pragma once

#include <cilantro/clustering_base.hpp>
#include <cilantro/colormap.hpp>
#include <cilantro/common_accumulators.hpp>
#include <cilantro/common_pair_evaluators.hpp>
#include <cilantro/common_renderables.hpp>
#include <cilantro/common_transformable_feature_adaptors.hpp>
#include <cilantro/config.hpp>
#include <cilantro/connected_component_extraction.hpp>
#include <cilantro/convex_hull_utilities.hpp>
#include <cilantro/convex_polytope.hpp>
#include <cilantro/correspondence.hpp>
#include <cilantro/correspondence_search_combined_metric_adaptor.hpp>
#include <cilantro/correspondence_search_combined_metric_combiner.hpp>
#include <cilantro/correspondence_search_kd_tree.hpp>
#include <cilantro/correspondence_search_kd_tree_utilities.hpp>
#include <cilantro/correspondence_search_oracle.hpp>
#include <cilantro/correspondence_search_projective.hpp>
#include <cilantro/data_containers.hpp>
#include <cilantro/flat_convex_hull_3d.hpp>
#include <cilantro/grid_accumulator.hpp>
#include <cilantro/grid_downsampler.hpp>
#include <cilantro/icp_base.hpp>
#include <cilantro/icp_common_instances.hpp>
#include <cilantro/icp_single_transform_combined_metric.hpp>
#include <cilantro/icp_single_transform_point_to_point_metric.hpp>
#include <cilantro/icp_warp_field_combined_metric_dense.hpp>
#include <cilantro/icp_warp_field_combined_metric_sparse.hpp>
#include <cilantro/image_point_cloud_conversions.hpp>
#include <cilantro/image_viewer.hpp>
#include <cilantro/io.hpp>
#include <cilantro/kd_tree.hpp>
#include <cilantro/kmeans.hpp>
#include <cilantro/mean_shift.hpp>
#include <cilantro/multidimensional_scaling.hpp>
#include <cilantro/nearest_neighbor_graph_utilities.hpp>
#include <cilantro/nearest_neighbors.hpp>
#include <cilantro/normal_estimation.hpp>
#include <cilantro/openmp_reductions.hpp>
#include <cilantro/point_cloud.hpp>
#include <cilantro/principal_component_analysis.hpp>
#include <cilantro/ransac_base.hpp>
#include <cilantro/ransac_hyperplane_estimator.hpp>
#include <cilantro/ransac_transform_estimator.hpp>
#include <cilantro/renderable.hpp>
#include <cilantro/space_region.hpp>
#include <cilantro/space_transformations.hpp>
#include <cilantro/spectral_clustering.hpp>
#include <cilantro/spectral_embedding_base.hpp>
#include <cilantro/timer.hpp>
#include <cilantro/transform_estimation.hpp>
#include <cilantro/visualizer.hpp>
#include <cilantro/visualizer_handler.hpp>
#include <cilantro/warp_field_estimation.hpp>
#include <cilantro/warp_field_utilities.hpp>
